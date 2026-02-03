class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans;int k=n/2;
        while(k--){
            ans.push_back(k+1);ans.push_back(-k-1);
        }
        if(n&1) ans.push_back(0);
        return ans;
    }
};