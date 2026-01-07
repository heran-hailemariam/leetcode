class Solution {
public:
    vector<int> diStringMatch(string s) 
    {
        int i=0;
        int d=s.size(); 
        vector<int> ans;
        for(int j=0;j<s.size();j++)
        {
            if(s[j]=='I')
            {
                ans.push_back(i);
                i++;
            }
            else
            {
                ans.push_back(d);
                d--;
            }
        }
        ans.push_back(i);
        return ans;
    }
};