class Solution {
public:
    int maxOperations(string s) {
        int x = 0, c = 0;
        for(int i = 0; i < s.size(); i++)
            if(s[i] == '1') c++;
            else if(s[i] == '0') 
                if(i == s.size() - 1 || s[i + 1] == '1') x += c;
        return x;
    }
};