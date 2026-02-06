class Solution {
public:
    class compare{
        //Just To Sort the pair of vector
        public:
        bool operator()(pair<string,int>&a,pair<string,int>&b){
           if (a.second != b.second) return a.second < b.second;
           return a.first < b.first;

        }
    };
    vector<string> watchedVideosByFriends(vector<vector<string>>& watchedVideos, vector<vector<int>>& friends, int id, int level) {
       unordered_map<int,bool>vis;//To track the visited nodes or vertices 

       queue<int>q;//Breadth First Search
       q.push(id);

       int lev =0;//To have a idea of our present level in the BFS 

       while(!q.empty()){//O(Edges )
        int size=q.size();
        while(size--){
            auto node=q.front();
            vis[node]=true;
            q.pop();
            for(auto i:friends[node]){
                if(!vis[i]){q.push(i);vis[i]=true;}
            }

        }
        lev++;
        if(lev==level){break;}//We have reached our desired level 
       }
       unordered_map<string,int>freq;
       while(!q.empty()){//Frequency of atched videos 
        auto node=q.front();
        q.pop();
        for(auto i:watchedVideos[node]){
            freq[i]++;
        }
       }
      vector<pair<string,int>>vec;//Since map gives bi-directional iterators we cant sort it using a comparator thus we put its vakue to a vector of pair<string,int> and then sort as our desire using the comparatir class
      for(auto i:freq){
        vec.push_back(i);
      }
      sort(vec.begin(),vec.end(),compare());//Sorting usign frequency and lexiographical order 
       vector<string>ans;
       for(auto i:vec){//Creating the sequence to be given as answer 
        ans.push_back(i.first);
       }
       return ans;
       //Time Complexity:O(V+E)
       //Auxillary Space :O(V+E)
    }
};