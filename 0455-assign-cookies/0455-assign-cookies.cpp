class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int a = 0; // child index
        int b = 0; // cookie index
        int count = 0;

        while (a < g.size() && b < s.size()) {
            if (s[b] >= g[a]) {
                count++;
                a++; // child satisfied
                b++; // cookie used
            } else {
                b++; // cookie too small
            }
        }
        return count;
    }
};