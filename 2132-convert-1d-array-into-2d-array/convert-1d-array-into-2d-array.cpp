class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> values;


        int i=0;
   if (original.size() != m * n) {
    return values;  
   }
       
        while(m!=0){
            vector<int>temp;
            int newn=n;
            while(newn!=0){
                temp.push_back(original[i++]);
                newn--;
            }
            m--;

            values.push_back(temp);   
        }

        return values;
    }
};