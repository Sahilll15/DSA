class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int> ds;

        findCombination(1,k,n,ds,ans);

        return ans;
    }

    void findCombination(int i,int k,int n,vector<int>& ds,vector<vector<int>>& ans){
        if(k==0 && n==0){
            ans.push_back(ds);
            return;
        }
         if (i > 9 || k < 0 || n < 0) return;
         
        ds.push_back(i);
        findCombination(i+1,k-1,n-i,ds,ans);
        ds.pop_back();
        findCombination(i+1,k--,n,ds,ans);
    }
};