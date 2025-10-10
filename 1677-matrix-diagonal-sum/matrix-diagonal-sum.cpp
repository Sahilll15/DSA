class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int sum=0;

        for(int i=0;i<mat.size();i++){
            sum+=mat[i][i];

            if(i!=n-1-i){
                sum+=mat[i][n-1-i];
            }
        }

        return sum;
    }
};