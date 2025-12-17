class Solution {
public:

    void dfs(vector<vector<char>>& grid,int row,int col){
        int rows=grid.size();
        int cols=grid[0].size();

        if(row<0 || row>=rows || col<0 || col >=cols || grid[row][col]=='0'){
            return ;
        }

        grid[row][col]='0';

        int dr[]={-1,0,+1,0};
        int dc[]={0,1,0,-1};

        for( int i=0;i<4;i++){
            dfs(grid,dr[i]+row,dc[i]+col);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int ans=0;  
        int lands=0;

        int rows=grid.size();
        int cols=grid[0].size();

        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(grid[i][j]=='1'){
                    lands++;
                    dfs(grid,i,j);
                }
            }
        }

        return lands;
    }
};