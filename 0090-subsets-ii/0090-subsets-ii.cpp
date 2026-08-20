class Solution {
public:
    vector<vector<int>> ans;

    void solve(int index,vector<int>& current,vector<int> &nums){
      ans.push_back(current);

        for(int i=index;i<nums.size();i++){
            if(i>index && nums[i]==nums[i-1])continue;
            current.push_back(nums[i]);
            solve(i+1,current,nums);
            current.pop_back();
        }   
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>current;
        sort(nums.begin(),nums.end());
        solve(0,current,nums);
        return ans;
    }
};