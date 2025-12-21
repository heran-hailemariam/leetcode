class Solution {
public:
int count=0;
    int countKDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+k==nums[j]){
                    count++;
                }
            }
        }
        return count;
    }
};