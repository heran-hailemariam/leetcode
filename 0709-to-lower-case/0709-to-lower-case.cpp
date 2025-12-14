class Solution {
public:
    string toLowerCase(string s) {
        for(int i = 0; i < s.size(); i++) {
            int value = static_cast<int>(s[i]);
            if(value <= 90 && value >= 65) {
                s[i] = static_cast<char>(value + 32);
            }
        }

        return s;
    }
};