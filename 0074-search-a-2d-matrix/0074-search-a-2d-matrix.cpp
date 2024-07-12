class Solution {
public:
        bool bs(vector<int> arr, int target) {
        int left = 0;
        int right = arr.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (arr[mid] == target) {
                return true;
            } else if (target > arr[mid]) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return false;
        }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
            int n=matrix.size();
            int m=matrix[0].size();

            for(int i=0;i<n;i++){
                if(target>matrix[i][m-1]){
                    continue;
                }else if (target <= matrix[i][m-1]){
                    if(bs(matrix[i],target)==true){
                        return true;
                    }
                }
            }

            return false;
    }
};