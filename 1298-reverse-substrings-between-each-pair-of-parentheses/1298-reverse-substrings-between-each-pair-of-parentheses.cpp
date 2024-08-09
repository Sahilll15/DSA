class Solution {
public:
    string reverseParentheses(string s) {
        stack<char> stk;

        for (char ch : s) {
            if (ch == ')') {
       
                string temp;
                while (stk.top() != '(') {
                    temp += stk.top();
                    stk.pop();
                }
                stk.pop();

            
                for (char c : temp) {
                    stk.push(c);
                }
            } else {
                stk.push(ch);
            }
        }


        string result;
        while (!stk.empty()) {
            result = stk.top() + result; 
            stk.pop();
        }

        return result;
    }
};
