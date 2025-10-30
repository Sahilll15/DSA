class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int current_max=nums[0];
        int global_max=nums[0];
        int n=nums.size();

        for(int i=1;i<n;i++){
            current_max=max(current_max+nums[i],nums[i]);
            global_max=max(global_max,current_max);
        }

        return global_max;
    }
};