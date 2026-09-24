class Solution {
public:
    void dfs(int i,int j,vector<vector<int>>& vis,
             vector<vector<int>>& grid){
        int rows=grid.size();
        int cols=grid[0].size();
        if(i<0|| i>=rows || j<0 || j>=cols || grid[i][j]==0 || vis[i][j] == 1){
            return;
        }

        vis[i][j]=1;

        
        int sr[]={-1,0,+1,0};
        int sc[]={0,+1,0,-1};

        for(int k=0;k<4;k++){
            dfs(i+sr[k],j+sc[k],vis,grid);
        }
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int rows=grid.size();
        int cols=grid[0].size();
        int ans=0;

         vector<vector<int>> vis(rows, vector<int>(cols, 0));

         for (int j = 0; j < cols; j++) {
            if (!vis[0][j] && grid[0][j] == 1)
                dfs(0, j, vis, grid);

            if (!vis[rows - 1][j] && grid[rows - 1][j] == 1)
                dfs(rows - 1, j, vis, grid);
        }

        for (int i = 0; i < rows; i++) {
            if (!vis[i][0] && grid[i][0] == 1)
                dfs(i, 0, vis, grid);

            if (!vis[i][cols - 1] && grid[i][cols - 1] == 1)
                dfs(i, cols - 1, vis, grid);
        }

    
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {

                if (grid[i][j] == 1 && vis[i][j] == 0) {
                    ans++;
                }
            }
        }

        return ans;

    }
};