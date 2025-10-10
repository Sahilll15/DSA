class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int ans = 0;
        int m = matrix.size();
        int n = matrix[0].size();

        int start=0;
        int end= m * n -1;

        while(start<=end){
            int mid=start+(end-start)/2;

            int row=mid/n;
            int col=mid % n;

            int midValue=matrix[row][col];

            if(midValue==target){
                return true;
            }else if(midValue < target){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
      

      return false;
    }

   
};