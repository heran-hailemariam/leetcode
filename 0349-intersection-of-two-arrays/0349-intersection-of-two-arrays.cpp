// HashMap Approach
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> mp;
        for(int x : nums1)
            mp[x] =1;
        
        for(int x: nums2)
            if(mp[x]==1)
                mp[x]++;
        
        vector<int> ans;
        for(auto x: mp)
            if(x.second==2)
                ans.push_back(x.first);
        return ans;
    }   
};