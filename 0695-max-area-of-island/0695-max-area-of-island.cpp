class Solution {
public:
    void dfs(int i, int j, vector<vector<int>>& grid, int& currentArea) {
        if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] != 1) {
            return;
        }

        currentArea++;
        grid[i][j] = 0; 

        int delRow[] = {0, +1, 0, -1};
        int delCol[] = {-1, 0, +1, 0};

        for (int k = 0; k < 4; k++) {
            int nrow = i + delRow[k];
            int ncol = j + delCol[k];

            dfs(nrow, ncol, grid, currentArea);
        }
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        if (grid.empty() || grid[0].empty()) {
            return 0;
        }

        int maxArea = 0;
        int n = grid.size();
        int m = grid[0].size();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    int currentArea = 0;
                    dfs(i, j, grid, currentArea);
                    if (currentArea > maxArea) {
                        maxArea = currentArea;
                    }
                }
            }
        }

        return maxArea;
    }
};
