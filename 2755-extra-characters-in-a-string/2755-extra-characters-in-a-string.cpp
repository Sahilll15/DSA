class Solution {
public:
    int minExtraChar(const string &s, vector<string>& dict) {
        memset(dp, -1, sizeof(dp)); 
        
        return minExtraCharHelper(s, dict, 0);
    }
    
private:
    int dp[51]; 

    int minExtraCharHelper(const string &s, vector<string>& dict, int i) {
        if (i == s.size())
            return 0;

        if (dp[i] == -1) {
            dp[i] = 1 + minExtraCharHelper(s, dict, i + 1); 

            for (const auto &w : dict) {
                if (s.compare(i, w.size(), w) == 0) {
                    dp[i] = min(dp[i], minExtraCharHelper(s, dict, i + w.size())); 
                }
            }
        }

        return dp[i]; 
    }
};