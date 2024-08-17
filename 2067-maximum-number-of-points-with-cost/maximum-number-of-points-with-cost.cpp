class Solution {
public:
    long long maxPoints(vector<vector<int>>& points) {
        int m = points.size();
    int n = points[0].size();
    
    vector<long> dp(n, 0);
    
    for (int c = 0; c < n; ++c) {
        dp[c] = points[0][c];
    }
    
    for (int r = 1; r < m; ++r) {
        vector<long> left(n, 0), right(n, 0), new_dp(n, 0);
        
      
        left[0] = dp[0];
        for (int c = 1; c < n; ++c) {
            left[c] = max(left[c - 1] - 1, dp[c]);
        }
        
     
        right[n - 1] = dp[n - 1];
        for (int c = n - 2; c >= 0; --c) {
            right[c] = max(right[c + 1] - 1, dp[c]);
        }
        
      
        for (int c = 0; c < n; ++c) {
            new_dp[c] = points[r][c] + max(left[c], right[c]);
        }
        
        dp = new_dp;
    }
    
    return *max_element(dp.begin(), dp.end());
    }
};