class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int minDiff = INT_MAX;
        vector<vector<int>>res;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size()-1;i++){
            if(abs(arr[i]-arr[i+1])<minDiff)minDiff = abs(arr[i]-arr[i+1]);
        }
        for(int i=0;i<arr.size()-1;i++){
            if(abs(arr[i]-arr[i+1])==minDiff){
                res.push_back({arr[i],arr[i+1]});
            }
        }
        sort(res.begin(),res.end());
        return res;
    }
};