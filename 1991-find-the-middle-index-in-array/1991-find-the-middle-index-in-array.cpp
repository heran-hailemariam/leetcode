class Solution {
public:
    int findMiddleIndex(vector<int>& nums) 
    {
      long long total = 0;
      for(int num : nums) total += num;

       long long left = 0;

      for(int i = 0; i < nums.size(); i++)
      {
        long long right = total - left - nums[i];

        if(left == right) return i;

            left += nums[i];
        
      }

      return -1;  
    }
};
// upVOte please //