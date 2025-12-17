class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        int r=rCenter;
        int c=cCenter;
        vector<vector<int>>vec;
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                int d=abs(i-r)+abs(j-c);
                vec.push_back({d,i,j});
            }
        }
        sort(vec.begin(),vec.end());
        vector<vector<int>>ans;
        for(auto it:vec)
        {
            ans.push_back({it[1],it[2]});
        }
        return ans;
    }
};