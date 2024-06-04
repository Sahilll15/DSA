class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int l,r=0;
        int ans=0;
        string numStr = to_string(num);
        int n = numStr.length();
        
        for (int i = 0; i <= n - k; i++) {
            string substr = numStr.substr(i, k);
            int divisor = stoi(substr);
            if (divisor != 0 && num % divisor == 0) {
                ans++;
            }
        }
        return ans;
    }
};