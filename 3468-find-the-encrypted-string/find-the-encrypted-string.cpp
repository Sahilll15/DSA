class Solution {
public:
    string getEncryptedString(string s, int k) {
        int n = s.length();
        string t = s;
        for (int i = 0; i < n; i++) {

            t[i] = s[(i + k) % n];
        }
        return t;
    }
};