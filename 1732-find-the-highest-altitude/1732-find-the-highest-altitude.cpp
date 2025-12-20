class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int cur = 0;
        int maxnum = 0;
        for(int i : gain){
            cur += i;
            maxnum = max(maxnum, cur);
        }
        return maxnum;
    }
};