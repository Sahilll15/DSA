class Solution {
public:
    int findUniquePaths(int i, int j, int m, int n, vector<vector<int>>& dp,vector<vector<int>>& matrix) {
        if (i >= m || j >= n)
            return 0;
        if (dp[i][j] != -1)
            return dp[i][j];

        if(matrix[i][j]==1) return 0;
        if (i == m - 1 && j == n - 1)
            return 1;

        return dp[i][j] = findUniquePaths(i + 1, j, m, n, dp,matrix) +
                          findUniquePaths(i, j + 1, m, n, dp,matrix);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int i = 0;
        int j = 0;
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        vector<vector<int>> dp(m, vector<int>(n, -1));

        return findUniquePaths(i, j, m, n, dp,obstacleGrid);
    }
};