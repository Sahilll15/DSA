class Solution {
public:
    vector<vector<int>> ans;

    void solve(vector<int>nums,int index,vector<int>& current){
        if(nums.size()==index){
            ans.push_back(current);
            return;
        }

        current.push_back(nums[index]);
        solve(nums,index+1,current);
        current.pop_back();
        solve(nums,index+1,current);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> current;
        solve(nums,0,current);
        return ans;
    }


};