class Solution {
private:
    void dfs(int row, int col, vector<vector<int>>& vis, vector<vector<char>>& board) {
        vis[row][col] = 1;

        int n = board.size();
        int m = board[0].size();

        int delCol[] = {0, +1, 0, -1};
        int delRow[] = {-1, 0, +1, 0};

        for (int i = 0; i < 4; i++) {
            int nrow = row + delRow[i];
            int ncol = col + delCol[i];

            if (nrow >= 0 && ncol < m && ncol >= 0 && nrow < n && !vis[nrow][ncol] &&
                board[nrow][ncol] == 'O') {
                dfs(nrow, ncol, vis, board);
            }
        }
    }

public:
    void solve(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();

        vector<vector<int>> vis(n, vector<int>(m, 0));

        // Run DFS for the boundary 'O's and mark them as visited
        for (int i = 0; i < m; i++) {
            if (!vis[0][i] && board[0][i] == 'O') {
                dfs(0, i, vis, board);
            }
            if (!vis[n-1][i] && board[n-1][i] == 'O') {
                dfs(n-1, i, vis, board);
            }
        }

        for (int i = 0; i < n; i++) {
            if (!vis[i][0] && board[i][0] == 'O') {
                dfs(i, 0, vis, board);
            }
            if (!vis[i][m-1] && board[i][m-1] == 'O') {
                dfs(i, m-1, vis, board);
            }
        }

        // Flip the unvisited 'O's to 'X'
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (board[i][j] == 'O' && !vis[i][j]) {
                    board[i][j] = 'X';
                }
            }
        }
    }
};
