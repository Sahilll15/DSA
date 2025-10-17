class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;

        for (int i = 0; i < s.size(); i++) {
            if (st.size() > 0) {

                if (st.top() == s[i]) {
                    st.pop();
                } else {
                    st.push(s[i]);
                }
            } else {
                st.push(s[i]);
            }
        }

        string ans;

        while (st.size() > 0) {
            ans += st.top();
            st.pop();
        }
        std::reverse(ans.begin(),ans.end());
        return ans;
    }
};