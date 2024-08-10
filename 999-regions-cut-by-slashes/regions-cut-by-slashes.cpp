class Solution {
public:
    vector<vector<int>> dir{{-1,0},{1,0},{0,-1},{0,1}};

    void dfs(int row,int col,vector<vector<int>>& matrix)
    {
        matrix[row][col]=1;     

        for(auto &it:dir)
        {
            int newRow=row+it[0];
            int newCol=col+it[1];

            if(newRow>=0 && newRow<matrix.size() && newCol>=0 && newCol<matrix[0].size() &&
               matrix[newRow][newCol]!=1)
               {
                    dfs(newRow,newCol,matrix);
               }
        }
    }

    int regionsBySlashes(vector<string>& grid) {
        int n=grid.size();
        int m=grid[0].size();

    


        vector<vector<int>> matrix(n*3,vector<int>(m*3,0));


        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='/')
                {
                    matrix[i*3][j*3+2]= 1;
                    matrix[i*3+1][j*3+1]= 1;
                    matrix[i*3+2][j*3]= 1;
                }
                else if(grid[i][j]=='\\')
                {
                    matrix[i*3][j*3]= 1;
                    matrix[i*3+1][j*3+1]= 1;
                    matrix[i*3+2][j*3+2]= 1;
                }
            }
        }

        int cnt=0;  
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    dfs(i,j,matrix);
                    cnt++;
                }
            }
        }
        return cnt;
    }
};