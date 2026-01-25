class Solution {
public:
    long long flowerGame(int n, int m) {
        return((((m%2 != 0)+(m/2)) * long(n/2)) + (((n%2!=0) +n/2) * long(m/2)));
    }
};