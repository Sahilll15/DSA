class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int ans = 0;
        int m = matrix.size();
        int n = matrix[0].size();
        for (int i = 0; i < m; i++) {

            if (target >= matrix[i][0] && target <= matrix[i][n - 1]) {
                ans = binary_search(matrix[i], target);
            }
        }

        return ans;
    }

    bool binary_search(vector<int>& matrix, int target) {
        int start = 0;
        int end = matrix.size() - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (matrix[mid] == target) {
                return true;
            } else if (matrix[mid] > target) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }

        return false;
    }
};