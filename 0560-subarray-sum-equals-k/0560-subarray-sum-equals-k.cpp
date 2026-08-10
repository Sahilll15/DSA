class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int ans=0;
        unordered_map<int,int>subMap;
        int sum=0;
        subMap[0]=1;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
         
            if(subMap.find(sum-k)!=subMap.end()){
               ans+=subMap[sum-k];
            }
             subMap[sum]=subMap[sum]+1;
        }

        return ans;
    }
};