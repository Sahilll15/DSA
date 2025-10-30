class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int currentMin=nums[0];
        int currentMax=nums[0];

        int ans=nums[0];

        for(int i=1;i<nums.size();i++){
            if (nums[i] < 0) swap(currentMax, currentMin);

            currentMin=min(nums[i],currentMin*nums[i]);
            currentMax=max(nums[i],currentMax*nums[i]);

            ans=max(ans,currentMax);
        }

        return ans;

    }
};