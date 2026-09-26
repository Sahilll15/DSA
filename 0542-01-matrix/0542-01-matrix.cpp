class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>> dist(n, vector<int>(m, -1));



        queue<pair<int,int>> q;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    q.push({i,j});
                    dist[i][j]=0;
                                    }
            }
        }

        int dr[]={-1,0,+1,0};
        int dc[]={0,+1,0,-1};

        while(!q.empty()){
            auto [r,c]=q.front();
            q.pop();

            for(int i=0;i<4;i++){
                int nr=r+dr[i];
                int nc=c+dc[i];

                 if (nr < 0 || nc < 0 || nr >= n || nc >= m) {
                    continue;
                }

            
                if (dist[nr][nc] != -1) {
                    continue;
                }

            
                dist[nr][nc] = dist[r][c] + 1;

                q.push({nr, nc});
            }
        }

        return dist;

    }
};