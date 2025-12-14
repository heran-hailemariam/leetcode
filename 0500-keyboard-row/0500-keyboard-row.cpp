class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_map<char, int> mp;
        mp['q'] = 1; mp['w'] = 1; mp['e'] = 1; mp['r'] = 1; mp['t'] = 1; mp['y'] = 1; mp['u'] = 1; 
        mp['i'] = 1; mp['o'] = 1; mp['p'] = 1;
        mp['a'] = 2; mp['s'] = 2; mp['d'] = 2; mp['f'] = 2; mp['g'] = 2; mp['h'] = 2; mp['j'] = 2; 
        mp['k'] = 2; mp['l'] = 2;
        mp['z'] = 3; mp['x'] = 3; mp['c'] = 3; mp['v'] = 3; mp['b'] = 3; mp['n'] = 3; mp['m'] = 3;
        vector<string> result;
        for(int i = 0; i < words.size(); ++i)
        {
            bool con = true;
            for(int j = 0; j < words[i].size() - 1; ++j)
            {
                if(mp[tolower(words[i][j])] != mp[tolower(words[i][j+1])])
                {
                    con = false;
                    break;
                }
            }
            if(con == true)
            {
                result.push_back(words[i]);
            }
        }
        return result;
    }
};