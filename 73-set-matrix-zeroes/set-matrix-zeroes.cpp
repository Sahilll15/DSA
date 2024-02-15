class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // Finding dimensions of the matrix
        int m = matrix.size(); // Number of rows
        int n = matrix[0].size(); // Number of columns

        int row[m];
        int col[n];

        // Initialize arrays row and col to 0
        for (int i = 0; i < m; ++i)
            row[i] = 0;
        for (int j = 0; j < n; ++j)
            col[j] = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 0) {
                    // mark ith index of row with 1:
                    row[i] = 1;

                    // mark jth index of col with 1:
                    col[j] = 1;
                }
            }
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (row[i] || col[j]) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
