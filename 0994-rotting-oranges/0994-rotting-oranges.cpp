class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {

        int n = grid.size();
        int m = grid[0].size();

        queue<pair<int,int>> q;

        int fresh = 0;
        int minutes = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) fresh++;
                if (grid[i][j] == 2) q.push({i, j});
            }
        }

        int dr[] = {-1, 0, +1, 0};
        int dc[] = {0, +1, 0, -1};

        while (!q.empty() && fresh > 0) {
            int sz = q.size();

            while (sz--) {
                auto [r, c] = q.front();
                q.pop();

                for (int i = 0; i < 4; i++) {
                    int nr = dr[i] + r;
                    int nc = dc[i] + c;

                    if (nr < 0 || nc < 0 || nr >= n || nc >= m || grid[nr][nc] != 1) continue;

                    grid[nr][nc] = 2;
                    fresh--;
                    q.push({nr, nc});
                }
            }
            minutes++;
        }

        return fresh == 0 ? minutes : -1;
    }
};