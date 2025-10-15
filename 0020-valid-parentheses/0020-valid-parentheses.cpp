class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        map<char, char> chars = {{'}', '{'}, {']', '['}, {')', '('}};


        for (int i = 0; i < s.size(); i++) {
           char c=s[i];
             if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } 
            else { 
                if (st.empty() || st.top() != chars[c]) {
                    return false;
                }
                st.pop();
            }
    }

    return st.empty();
}
}
;