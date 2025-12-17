class Solution {
public:
    string removeDuplicates(string s) {
        int n = s.length();
        string ans = "";
        for(int i = 0; i < n; i++){
            char currChar = s[i];
            if(ans.empty()){
                ans.push_back(currChar);
            }
            else if(currChar == ans.back()){
                ans.pop_back();
            }
            else if(currChar != ans.back()){
                ans.push_back(currChar);
            }
        }
        return ans;
    }
};