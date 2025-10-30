class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int currentMin=nums[0];
        int currentMax=nums[0];
        int ans=nums[0];

        for(int i=1;i<nums.size();i++){
            if(nums[i]<0){
                swap(currentMin,currentMax);
            }

            currentMin=min(nums[i],nums[i]*currentMin);
            currentMax=max(nums[i],nums[i]*currentMax);


            ans=max(ans,currentMax);
        }

        return ans;
    }
};