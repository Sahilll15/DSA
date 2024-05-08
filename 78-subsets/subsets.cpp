class Solution {
public:
    void helper(vector<int> nums,vector<vector<int>> &ans,vector<int> temp,int n,int p){
        if(n==p){
            ans.push_back(temp);
            return;
        }

        helper(nums,ans,temp,n,p+1);
        temp.push_back(nums[p]);
        helper(nums,ans,temp,n,p+1);


    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;

        int p=0;

        int n=nums.size();

        helper(nums,ans,temp,n,p);
        return ans;
    }
};