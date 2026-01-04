class Solution:
    def bestHand(self, ranks: List[int], suits: List[str]) -> str:
        
        type_count = Counter(suits)
        rank_count = Counter(ranks)
        
        if len(type_count) == 1:
            return "Flush"

        best = "High Card"
        for count in rank_count.values():
            if count >= 3:
                best = "Three of a Kind"
            elif count == 2 and best != "Three of a Kind":
                best = "Pair"

        return best
        