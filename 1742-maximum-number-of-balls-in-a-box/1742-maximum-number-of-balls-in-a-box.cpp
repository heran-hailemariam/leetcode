class Solution {
public:
    int digit_sum(int n){
        int sum = 0;
        while(n>0){
            sum += n%10;
            n /= 10;
        }
        return sum;
    }
    int countBalls(int lowLimit, int highLimit) {
        unordered_map<int,int> m;
        int ans = 0;
        for(int i = lowLimit; i <= highLimit; i++){
            int sum = digit_sum(i);
            m[sum]++;
            ans = max(ans , m[sum]);
        }
        return ans;
    }
};