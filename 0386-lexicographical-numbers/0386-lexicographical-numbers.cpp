class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int> result;
        int num = 1; 


        for (int i = 0; i < n; i++) {
            result.push_back(num);

            if (num * 10 <= n) {
             
                num *= 10;
            } else {
          
                while (num % 10 == 9 || num == n) {
                    num /= 10;  
                }

                num++;  
            }
        }
        return result;
    }
};