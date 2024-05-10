class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for (int i = 0; i < operations.size(); i++) {
            if (operations[i] == "C") {
                if (!st.empty()) {
                    st.pop();
                }
            } else if (operations[i] == "D") {
                int val = st.empty() ? 0 : st.top();
                st.push(2 * val);
            } else if (operations[i] == "+") {
                int val1 = st.empty() ? 0 : st.top();
                st.pop();
                int val2 = st.empty() ? 0 : st.top();
                st.push(val1);
                st.push(val1 + val2);
            } else {
                st.push(stoi(operations[i]));
            }
        }
        
        int sum = 0;
        while (!st.empty()) {
            sum += st.top();
            st.pop();
        }
        return sum;
    }
};