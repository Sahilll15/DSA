class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int ans=0;
        int n=grid.size();
        int m=grid[0].size();

        vector<vector<int>>vis(n,vector<int>(m,0));
        int cntFresh=0;
        queue<pair<pair<int, int>, int>> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    vis[i][j]=2;
                    q.push({{i,j},0});
                }else if(grid[i][j]==1){
                    cntFresh++;
                    vis[i][j]=0;
                    }else{
                    vis[i][j]=0;
                }
            }
        }


        int drow[]={-1,0,+1,0};
        int dcol[]={0,+1,0,-1};
        int time=0;
        while(!q.empty()){
            int r=q.front().first.first;
            int c=q.front().first.second;
            int t=q.front().second;
            q.pop();
            time=max(time,t);
            for(int i=0;i<4;i++){
                int nrow=r+drow[i];
                int ncol=c+dcol[i];

               if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m &&
                   grid[nrow][ncol] == 1 && vis[nrow][ncol] == 0) {

                    q.push({{nrow, ncol}, t + 1});
                    vis[nrow][ncol] = 1;
                    cntFresh--;
                }
            }

        }


        if(cntFresh==0){
            return time;
        }

        return -1;
    }

};