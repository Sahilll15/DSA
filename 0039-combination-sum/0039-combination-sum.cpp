class Solution {
public:
    vector<vector<int>> ans;
    void solve(int index,vector<int> &current,vector<int> &candidates,int target){
        if(index==candidates.size()) return;
        if(target==0){
            ans.push_back(current);
            return;
        }else if(target<0){
            return;
        }

        current.push_back(candidates[index]);
        solve(index,current,candidates,target-candidates[index]);

        current.pop_back();
        solve(index+1,current,candidates,target);

        return;
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> current;

        solve(0,current,candidates,target);

        return ans;
    }
};