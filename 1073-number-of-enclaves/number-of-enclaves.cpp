class Solution {
public:
    bool isBoundary(int r, int c, int n, int m) {
    return r == 0 || r == n - 1 || c == 0 || c == m - 1;
    }  

    vector<int> deltaRow={-1,0,+1,0};
    vector<int> deltaCol={0,+1,0,-1};

    void dfs(int row,int col,vector<vector<int>>& visited,vector<vector<int>>& grid){
      
        int n=grid.size();
        int m=grid[0].size();
        
        visited[row][col]=1;
          grid[row][col]=0;

        for(int i=0;i<4;i++){
            int nrow=row+deltaRow[i];
            int ncol=col+deltaCol[i];
                if (nrow >= 0 && nrow < n &&
    ncol >= 0 && ncol < m &&
    grid[nrow][ncol] == 1 &&
    !visited[nrow][ncol]) {
    dfs(nrow, ncol, visited, grid);
}

            
        }
        
    }

    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> visited(n,vector<int>(m,0));
        int ans=0;


        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(isBoundary(i,j,n,m) && grid[i][j]==1 && !visited[i][j]){
                
                  dfs(i,j,visited,grid);
                }
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    ans++;
                }
            }
        }
        

        return ans;
    }
};