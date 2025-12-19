class Solution {
public:
    int totalMoney(int n) {
        int monday = 0 , prev = 0 , ans = 0;
        for(int i = 0; i<n; i++){
            if(i%7 == 0){
                prev = monday;
                monday++;
            }
            ans += (++prev);
        }
        return ans;
    }
};