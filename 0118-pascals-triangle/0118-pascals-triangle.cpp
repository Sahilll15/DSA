class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        vector<int> v;
        for(int i=1 ;i<=numRows;i++){
            v.clear();
            for(int  j=1 ; j<=i;j++){
                if(j==1 || j==i)
                     v.push_back(1);
                else
                    v.push_back(result[i-1-1][j-1-1]+result[i-1-1][j-1]);
            }
            result.push_back(v);
        }
        return result;
    }
};