class Solution {
public:

    vector<vector<int>> ans;

    void solve(int index,vector<int>&current,vector<int>&candidates,int target){
        if(target==0){
            ans.push_back(current);
            return;
        }else if(target<0){
            return;
        }

        for(int i=index;i<candidates.size();i++){
            if(i>index && candidates[i]==candidates[i-1]) continue;
            if(candidates[i]>target) break;
            current.push_back(candidates[i]);
            solve(i+1,current,candidates,target-candidates[i]);
            current.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> current;
        solve(0,current,candidates,target);
        return ans;
    }   
};