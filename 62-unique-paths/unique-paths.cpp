class Solution {
public:

    int findUniquePaths(int i,int j,int m ,int n ,vector<vector<int>> & dp){
        if(i>=m || j>=n) return 0;
        
        if(dp[i][j]!=-1) return dp[i][j];
        if(i==m-1 && j==n-1) return 1;

        return dp[i][j]= findUniquePaths(i+1,j,m,n,dp) + findUniquePaths(i,j+1,m,n,dp);
    }
    int uniquePaths(int m, int n) {
        int i=0;
        int j=0;
        vector<vector<int>> dp(m,vector<int>(n,-1));

        return findUniquePaths(i,j,m,n,dp);
    }
};