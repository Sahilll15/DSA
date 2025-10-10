class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans=0;
        int m=accounts.size();
        int n=accounts[0].size();
        
        for(int i=0;i<m;i++){
            int count=0;
            for(int j=0;j<n;j++){
                count+=accounts[i][j];
            }
            ans=max(ans,count);
        }

        return ans;
    }
};