class Solution {
public:
    int waysToSplit(vector<int>& nums) {
         int p1 = 0;
         int p2 = 0;
         int n = nums.size();
         for(int i = 1 ; i < n ; i++){
            nums[i] += nums[i-1];
         }
         int mod = 1e9+7;
         int ans = 0;
         long long int finalans =0;
         while(p1<n-2){
            int l =  nums[p1];
            int m = nums[p2] - l;
            bool fl = 0;
            while(p2<=p1 || (p2<n-1 && m<l )){
                p2++;
                m = nums[p2] - l;
            }
            if(p2 == n-1) break;
            
               int lo = p2;
               int hi = n-2;
               while(hi>=lo){
                int mid = (lo+hi)>>1;
                  m = nums[mid] - l;
                  int r = nums[n-1]-nums[mid];
                if(r>=m){
                    lo = mid+1;
                }
                if(r<m){
                     hi = mid-1;
                }
               }  
               //cout<<p2<<"--"<<ans2<<endl;
               finalans += (hi-p2+1);
               finalans%=mod;
           p1++;
         }
         return finalans;
    }
};