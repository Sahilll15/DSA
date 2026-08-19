class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int>&current,vector<bool>&visisted,vector<int>& nums){
        if(current.size()==nums.size()){
            ans.push_back(current);
            return;
        }

        for(int i=0;i<nums.size();i++){
            if(!visisted[i]){
               visisted[i]=true;
               current.push_back(nums[i]);
                solve(current,visisted,nums);
                current.pop_back();
                visisted[i]=false;

            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> current;
        vector<bool> visisted(nums.size(),false);
        solve(current,visisted,nums);
        return ans;
    }
};