class Solution {
public:
    string removeKdigits(string num, int k) {
        string ans;
        stack<char> st;
        int n = num.size();

        for (int i = 0; i < n; i++) {
            while (k > 0 && !st.empty() && st.top() > num[i]) {
                st.pop();
                k--;
            }

            st.push(num[i]);
        }

        while (k > 0 && !st.empty()) {
            st.pop();
            k--;
        }

        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        while (ans.size() > 1 && ans[0] == '0') {
            ans.erase(ans.begin());
        }

        return ans.size() > 0 ? ans :"0";
    }
};