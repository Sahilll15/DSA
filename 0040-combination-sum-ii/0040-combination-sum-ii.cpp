class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> ds;

        findCombination(0, candidates, target, ds, ans);
        return ans;
    }

    void findCombination(int index, vector<int>& candidates, int target,
                         vector<int>& ds, vector<vector<int>>& ans) {
        if (target == 0) {
            ans.push_back(ds);
            return;
        }

        for (int i = index; i < candidates.size(); i++) {
            if (i > index && candidates[i] == candidates[i - 1])
                continue;
            if (candidates[i] > target)
                break;
            ds.push_back(candidates[i]);
            findCombination(i + 1, candidates, target - candidates[i], ds, ans);
            ds.pop_back();
        }
    }
};
