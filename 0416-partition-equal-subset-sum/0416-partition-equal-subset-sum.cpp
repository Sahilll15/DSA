class Solution {
public:
    bool subSetSum(int n,vector<int>& nums,int target,vector<vector<int>>& dp){
        if(target==0) return true;
        if(n==0) return nums[0]==target;

        if(dp[n][target]!=-1) return dp[n][target];
        bool notPick=subSetSum(n-1,nums,target,dp);

        bool pick=false;

        if(nums[n]<=target){
            pick=subSetSum(n-1,nums,target-nums[n],dp);
        }

        return dp[n][target]= pick || notPick;
    }
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int totalSum=0;

        for(int i=0;i<nums.size();i++){
            totalSum+=nums[i];
        }

        if(totalSum%2 !=0 ) return false;
        
        int target=totalSum/2;
        vector<vector<int>> dp(n,vector<int>(target+1,-1));
        return subSetSum( n-1,nums,target,dp);

    }
};