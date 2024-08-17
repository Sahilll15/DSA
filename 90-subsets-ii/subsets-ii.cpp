class Solution {
public:
    void backTrack(set<vector<int>> &ans, vector<int> temp, vector<int> &nums, int start) {
        ans.insert(temp);  

        for (int i = start; i < nums.size(); i++) {
            temp.push_back(nums[i]);
            backTrack(ans, temp, nums, i + 1);  
            temp.pop_back();  
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> currentds;  
        vector<int> temp;

        sort(nums.begin(), nums.end());  
        backTrack(currentds, temp, nums, 0);

       
        vector<vector<int>> ans(currentds.begin(), currentds.end());

        return ans;
    }
};