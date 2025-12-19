class Solution {
public:
    int countPairs(vector<int>& nums) {
        int mod=1e9+7;
        unordered_map<int,int>mp;
        int ans=0;

        for(int i=0;i<nums.size();i++)
        {
            int num=nums[i];
            int n=0;
            while(n<=21)
            {
                int target=pow(2,n++)-num;
                if(mp.find(target)!=mp.end())
                {
                    ans=(ans+mp[target])%mod;
                }
            }
            mp[num]++;
        }
        return ans;
    }
};