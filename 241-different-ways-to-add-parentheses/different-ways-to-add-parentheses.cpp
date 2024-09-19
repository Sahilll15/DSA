class Solution {
public:
    vector<int> diffWaysToCompute(string input) {
   vector<int> data;
   vector<char> ops;
  int num = 0;
  char op = ' ';
   istringstream ss(input + "+");
   while(ss >> num && ss >> op) {
       data.push_back(num);
       ops.push_back(op);
   }
   const int size_i = data.size();
    vector<vector<vector<int>>> dp(size_i, vector<vector<int>>(size_i, vector<int>()));
    for (int i = 0; i < size_i; i += 1)
     for (int j = i; j >= 0; j -= 1) {
         if (i == j) {dp[j][i].push_back(data[i]); continue;}
         for (int k = j; k < i; k += 1) {
             for (auto left : dp[j][k]) 
               for (auto right : dp[k+1][i]) {
                   int val = 0;
                   switch(ops[k]) {
                       case '+': val = left + right; break;
                       case '-': val = left - right; break;
                       case '*': val = left * right; break;
                   }
                   dp[j][i].push_back(val);
               }
         }
     }
   return dp[0][size_i-1];
}
};