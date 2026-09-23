class Solution {
public:

    void dfs(int row,int col,vector<vector<char>>& grid){
            int rows=grid.size();
            int cols=grid[0].size();

        if(row<0 || row>=rows || col<0 || col>=cols || grid[row][col]=='0'){
            return;
        }   

        grid[row][col]='0';

        int dc[]={0,+1,0,-1};
        int dr[]={-1,0,+1,0};

        for(int i=0;i<4;i++){
           if(grid[row][col]=='1'){
                dfs(dr[i],dc[i],grid);
           }
        }
    }   
    int numIslands(vector<vector<char>>& grid) {
        int rows=grid.size();
        int cols=grid[0].size();

        int ans=0;
        
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(grid[i][j]=='1'){
                    ans++;
                    dfs(i,j,grid);
                }
            }
        }

        return ans;
    }
};