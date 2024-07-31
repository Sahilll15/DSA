class Solution {
public:
    int minHeightShelves(vector<vector<int>>& books, int shelfWidth) {
        int n = books.size();
        vector<vector<int>> dp(n, vector<int>(shelfWidth + 1, -1)); 
        return solve(0, books, shelfWidth, shelfWidth, 0, dp);
    }

    int solve(int i, vector<vector<int>>& books, int remainingWidth, int shelfWidth, int currentHeight, vector<vector<int>>& dp) {
        if (i == books.size()) return currentHeight; 
        
        if (dp[i][remainingWidth] != -1)
        {
            return dp[i][remainingWidth]; 
        } 

        int curWidth = books[i][0];
        int curHeight = books[i][1];
        int take = INT_MAX;

        
        if (remainingWidth >= curWidth) {
            take = solve(i + 1, books, remainingWidth - curWidth, shelfWidth, max(currentHeight, curHeight), dp);
        }

        
        int nottake = currentHeight + solve(i + 1, books, shelfWidth - curWidth, shelfWidth, curHeight, dp);

        dp[i][remainingWidth] = min(take, nottake);
        return dp[i][remainingWidth];
    }
};