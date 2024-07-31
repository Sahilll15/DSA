class Solution {
public:
    void backTrack(vector<vector<int>> &ans,vector<int>temp,vector<int> &nums,int start){

        ans.push_back(temp);

        for(int i=start;i<nums.size();i++){
            temp.push_back(nums[i]);
            backTrack(ans,temp,nums,i+1);
            temp.pop_back();
        }

    }
    vector<vector<int>> subsets(vector<int>& nums) {
    
        vector<vector<int>> ans;
        vector<int>temp;

        backTrack(ans,temp,nums,0);

        return ans;
    }
};