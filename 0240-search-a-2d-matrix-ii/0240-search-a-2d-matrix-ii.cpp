class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=0;
        int col=matrix[0].size()-1;
        int n=matrix.size();
        while(row < n && col >=0){
            if(matrix[row][col] == target){
                return true;
            }else if (matrix[row][col] < target){
                row++;
            }else {
                col--;
            }
        }

        return false;
    }
};