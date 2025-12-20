class Solution {
public:
    int n, m;
    vector<int> dr = {-1, 0, 1, 0};
    vector<int> dc = {0, 1, 0, -1};

    bool dfs(int r, int c, int pr, int pc,
             vector<vector<char>>& grid,
             vector<vector<bool>>& vis) {

        vis[r][c] = true;

        for (int i = 0; i < 4; i++) {
            int nr = r + dr[i];
            int nc = c + dc[i];

            if (nr < 0 || nc < 0 || nr >= n || nc >= m)
                continue;

            if (grid[nr][nc] != grid[r][c])
                continue;

            if (!vis[nr][nc]) {
                if (dfs(nr, nc, r, c, grid, vis))
                    return true;
            }
            else if (nr != pr || nc != pc) {
                return true; 
            }
        }

        return false;
    }

    bool containsCycle(vector<vector<char>>& grid) {
        n = grid.size();
        m = grid[0].size();

        vector<vector<bool>> vis(n, vector<bool>(m, false));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!vis[i][j]) {
                    if (dfs(i, j, -1, -1, grid, vis))
                        return true;
                }
            }
        }
        return false;
    }
};
