class Solution {
public:
    vector<int> dr={-1,0,+1,0};
    vector<int> dc={0,+1,0,-1};

    void dfs(int row,int col, vector<vector<int>>& image,vector<vector<int>> & ans,int color,int initColor){
        
        ans[row][col]=color;
        int rows=image.size();
        int cols=image[0].size();

        for(int i=0;i<4;i++){
            int nrow=row+dr[i];
            int ncol=col+dc[i];

            if(nrow>=0 && nrow < rows && ncol>=0 && ncol< cols && image[nrow][ncol]==initColor && ans[nrow][ncol]!=color ){
                dfs(nrow, ncol, image, ans, color, initColor);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>> ans=image;

        int initColor=image[sr][sc];

        dfs(sr,sc,image,ans,color,initColor);

        return ans;
    }
};