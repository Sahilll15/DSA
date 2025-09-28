class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        
        int windowSize=2*k+1;
        int n=nums.size();
        vector<int>ans(n,-1);
         
         if(windowSize>n){
            return ans;
         }

        long long current=0;
        for(int i=0;i< windowSize;i++){
            current+=nums[i];
        }

        ans[k]=current/windowSize;

        for(int i=windowSize;i<n;i++){
             current = current + nums[i] - nums[i - windowSize];

             ans[i-k]=current/windowSize;
            
        }

        return ans;
    }
};