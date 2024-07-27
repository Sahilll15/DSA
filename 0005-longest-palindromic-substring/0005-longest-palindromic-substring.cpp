class Solution {
public:
    
    string longestPalindrome(string s) {
        int n=s.size();
        vector<vector<bool>>dp(n+1,vector<bool>(n+1));
        //palindrom of size=1
        for(int i=0;i<n;i++){
            dp[1][i]=1;
        }
        int maxi=1;
        //size=2;
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                dp[2][i]=1;
                maxi=2;
            }
        }
        //size from 3 to n
        for(int i=3;i<=n;i++){
            for(int j=0;j<n-i+1;j++){
                int req=i-2;
                if(dp[req][j+1]){
                    if(j+i-1<n && s[j]==s[j+i-1]){
                        dp[i][j]=1;
                        maxi=i;
                    }
                }
            }
        }
        string ans;
        for(int i=0;i<n;i++){
            if(dp[maxi][i]){
                return s.substr(i,maxi);
            }
        }
        return ans;
        
    }
};