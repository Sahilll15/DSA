class Solution {
public:
    int n,m;
    bool isValid(int i,int j){
        if(i>=0 && i<n && j>=0 && j<m)
            return true;
        return false;
    }
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        n=rows,m=cols;
        vector<vector<int>> ans;
        vector<vector<bool>> vis(rows,vector<bool>(cols,false));
        int row = rStart,endRow = rStart + 1;
        int col = cStart,endCol = cStart + 1;
        int cnt = 0;
        while(1){
            for(int j=col;j<endCol;j++){
                if(isValid(row,j) && vis[row][j]==false){
                    cnt++;
                    vis[row][j]=true;
                    ans.push_back({row,j});
                }
            }
            if(cnt == n*m)
                break;
            row--;
            for(int i=row+1;i<endRow;i++){
                if(isValid(i,endCol) && vis[i][endCol]==false){
                    cnt++;
                    vis[i][endCol]=true;
                    ans.push_back({i,endCol});
                }
            }
            if(cnt == n*m)
                break;
            endCol++;
            for(int j=endCol-1;j>=col-1;j--){
                if(isValid(endRow,j) && vis[endRow][j]==false){
                    cnt++;
                    vis[endRow][j]=true;
                    ans.push_back({endRow,j});
                }
            }
            if(cnt == n*m)
                break;
            endRow++;
            for(int i=endRow-1;i>=row;i--){
                if(isValid(i,col-1) && vis[i][col-1] == false){
                    cnt++;
                    vis[i][col-1]=true;
                    ans.push_back({i,col-1});
                }
            }
            if(cnt == n*m)
                break;
            col--;
        }
        return ans;
   
    }
};