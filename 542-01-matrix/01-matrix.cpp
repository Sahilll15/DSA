class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
         int n=mat.size();
         int m=mat[0].size();

         vector<vector<int>> dist(n,vector<int>(m,-1));
         queue<pair<int,int>>q;

         for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    q.push({i,j});
                    dist[i][j]=0;
                }
            }
         }

         int dcol[]={-1,0,+1,0};
         int drow[]={0,+1,0,-1};

         while(!q.empty()){
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                  int nr = row + drow[i];
                 int nc = col + dcol[i];

                 if(nr>=0 && nr<n && nc>=0 && nc<m  && dist[nr][nc] == -1){
                    q.push({nr,nc});
                    dist[nr][nc]=dist[row][col]+1;    
                 }
            }
         }

        return dist;
    }
};