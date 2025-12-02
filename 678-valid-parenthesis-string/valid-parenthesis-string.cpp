class Solution {
public:
    bool checkValidString(string s) {
        int open = 0;
        int star = 0;

        for (char c : s) {
            if (c == '(')
                open++;
            else if (c == '*')
                star++;
            else {
                if (open > 0)
                    open--;
                else if (star > 0)
                    star--;
                else
                    return false;
            }
        }
        int close = 0;
        star = 0;

        for (int i = s.size() - 1; i >= 0; i--) {
            char c = s[i];
            if (c == ')')
                close++;
            else if (c == '*')
                star++;
            else {
                if (close > 0)
                    close--;
                else if (star > 0)
                    star--;
                else
                    return false;
            }
        }

        return true;
    }
};