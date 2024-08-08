class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();

        int ans=0;

        for(int i=0;i<n;i++){
            
            ans+=mat[i][i];
            ans+=mat[n-1-i][i];
        }

      if (n % 2 != 0) {
            ans -= mat[n / 2][n / 2];
        }


        return ans;
    }
};