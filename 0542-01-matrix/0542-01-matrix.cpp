class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        vector<vector<int>> dist(n, vector<int>(m, INT_MAX));
        vector<vector<int>> vis(n, vector<int>(m, 0));
        queue<pair<pair<int,int>,int>> q;

        // Initialize queue with all 0 cells and mark them as visited
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(mat[i][j] == 0) {
                    q.push({{i, j}, 0});
                    vis[i][j] = 1;
                    dist[i][j] = 0; // Distance to itself is 0
                }
            }
        }

        // Directions for 4 neighbors (up, right, down, left)
        int delrow[] = {-1, 0, 1, 0};
        int delCol[] = {0, 1, 0, -1};

        // BFS to update distances
        while(!q.empty()) {
            int row = q.front().first.first;
            int col = q.front().first.second;
            int steps = q.front().second;
            q.pop();

            for(int i = 0; i < 4; i++) {
                int nrow = row + delrow[i];
                int ncol = col + delCol[i];

                if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && vis[nrow][ncol] == 0) {
                    vis[nrow][ncol] = 1;
                    dist[nrow][ncol] = steps + 1;
                    q.push({{nrow, ncol}, steps + 1});
                }
            }
        }

        return dist;
    }
};
