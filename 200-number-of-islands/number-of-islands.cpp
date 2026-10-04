class Solution {
public:
    void dfs(int i,int j,vector<vector<int>>&visited,vector<vector<char>>&grid){
        int n=grid.size();
        int m=grid[0].size();
        visited[i][j]=1;    

        int dr[]={-1,0,+1,0};
        int dc[]={0,1,0,-1};

        for(int k=0;k<4;k++){
            int nr=dr[k]+i;
            int nc=dc[k]+j;

            if (nr < 0 || nc < 0 || nr >= n || nc >= m) continue;
            if (grid[nr][nc] != '1' || visited[nr][nc]) continue;
            dfs(nr,nc,visited,grid);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
       vector<vector<int>> visited(n, vector<int>(m, 0));
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!visited[i][j] && grid[i][j]=='1'){
                    count++;
                    dfs(i,j,visited,grid);
                }
            }
        }
        return count;
    }
};