class Solution {
public:
    int balancedStringSplit(string s) {

        int n = s.length();
        int  r = 0;
        int count = 0;
        int ans = 0;

        while (r < n) {

            if (s[r] == 'R') {
                count++;
            } else {
                count--;
            }
            if (count == 0) {
                ans++;
            }

            r++;
        }
        return ans;
    }
};