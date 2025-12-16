class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int smallest = INT_MAX;
        int largest = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            smallest = min(nums[i], smallest);
            largest = max(nums[i], largest);
        }

        if (largest - smallest - 2 * k <= 0 || nums.size() == 1)
            return 0;
        else
            return (largest - smallest - 2 * k);
    }
};