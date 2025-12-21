class Solution {
public:
    int findGCD(vector<int>& nums) {
        int s = *min_element(nums.begin(),nums.end());
        int l = *max_element(nums.begin(),nums.end());
        for(int i=s;i>=1;i--)
        {
            if(s%i==0 && l%i==0)
            {
                return i;
            }
        }
        return 1;
    }
};