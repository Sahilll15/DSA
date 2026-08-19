class Solution {
public:
    vector<vector<int>> ans;
    void solve(int num,vector<int>& current,int k,int n){
        if(current.size()==k){
            if(n==0){
                ans.push_back(current);
            }
            return;
        }
         if(n < 0 || num > 9) return;
        current.push_back(num);
        solve(num+1,current,k,n-num);

        current.pop_back();
        solve(num+1,current,k,n);

        
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> current;
        solve(1,current,k,n);
        return ans;
    }
};