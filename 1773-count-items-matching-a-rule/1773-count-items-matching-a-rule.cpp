class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int checkInd = -1;
        if(ruleKey == "type")checkInd = 0;
        else if(ruleKey == "color")checkInd = 1;
        else if(ruleKey == "name")checkInd = 2;
        int cnt = 0;
        for(int i = 0;i<items.size();i++){
            if(items[i][checkInd] == ruleValue)cnt++;
        }
        return cnt;
        
    }
};