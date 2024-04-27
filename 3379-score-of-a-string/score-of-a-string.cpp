class Solution {
public:
    int scoreOfString(string s) {
        int res=0;

        for(int i=1;i<s.length();i++){
            res+=abs(s[i] - s[i-1]);
        }

        return res;
    }
};