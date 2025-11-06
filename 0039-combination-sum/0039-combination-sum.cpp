class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;

        findCombination(0,candidates,target,ans,ds);

        return ans;
    }

    void findCombination(int i,vector<int>& arr, int target,vector<vector<int>>& ans,vector<int>& ds){
        if(arr.size()==i){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }

       if (arr[i] <= target) {
        ds.push_back(arr[i]);
        findCombination(i, arr,target - arr[i], ans, ds);
        ds.pop_back();
      }


     findCombination(i+1, arr,target  , ans, ds);
    }

};