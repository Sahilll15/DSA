class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        vector<vector<int>> subarrays;

        int ans=0;
        for(int i=0;i<nums.size();i++){
            int currentSum=0;
            for(int j=i;j<nums.size();j++){
                currentSum+=nums[j];

                if(currentSum==k){
                    ans++;
                }
            }
        }

        return ans;
    }
};