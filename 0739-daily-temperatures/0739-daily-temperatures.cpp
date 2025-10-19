class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ans(n, 0);          
        stack<pair<int,int>> st;        

        for(int i = n - 1; i >= 0; i--) {
            while(!st.empty() && st.top().first <= temperatures[i]) {
                st.pop();
            }

            ans[i] = st.empty() ? 0 : st.top().second-i;
            st.push({temperatures[i], i});
        }

        return ans;
    }
};
