#include <vector>

class Solution {
public:

    void recursion(int i ,int n,vector<char>& s){
        if(i >= n/2){ 
            return;
        }
        swap(s[i],s[n-i-1]);
        recursion(i + 1, n, s);
    }
    
    void reverseString(vector<char>& s) {
        int i = 0; 
        recursion(i, s.size(), s);
    }
};
