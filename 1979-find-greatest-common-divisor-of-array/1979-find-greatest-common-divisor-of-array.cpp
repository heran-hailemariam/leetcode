class Solution {
public:
    int findGCD(vector<int>& nums) {
        int s = *min_element(nums.begin(),nums.end());
        int l = *max_element(nums.begin(),nums.end());
        for(int i=s;i>=1;i--)
        {
            if(s%i==0 && l%i==0)
            {
                return i;class Solution {
public:
    int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }

        return a;
    }

    int findGCD(vector<int>& nums) {
        int mn = *min_element(nums.begin(), nums.end());

        int mx = *max_element(nums.begin(), nums.end());

        return gcd(mn, mx);
    }
};
            }
        }
        return 1;
    }
};