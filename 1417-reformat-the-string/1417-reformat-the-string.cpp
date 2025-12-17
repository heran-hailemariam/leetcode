class Solution {
public:
    string reformat(string s) {
        int n=s.size();
        string alpha, num;

        for(int i=0; i<n; i++){
            if(isdigit(s[i]))
                num+=s[i];
            else
                alpha+=s[i];
        }
        string ans;
        int sz=min(num.size(), alpha.size());
        if(abs((int)num.size()-(int)alpha.size())>1)
            return "";
        else{
            int i;
            for(i=0; i<sz; i++){
                if(alpha.size()>num.size()){
                    ans+=alpha[i];
                    ans+=num[i];
                }
                else{
                    ans+=num[i];
                    ans+=alpha[i];
                }
            }

            if(i<alpha.size())
                ans+=alpha[i];
            if(i<num.size())
                ans+=num[i];
        }
        
        return ans;
    }
};