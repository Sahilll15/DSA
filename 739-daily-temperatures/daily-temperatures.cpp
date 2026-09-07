class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int> ans(n);
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            if(st.empty()){
                st.push(i);
                ans[i]=0;
                continue;
            }

            while(!st.empty() && temperatures[i]>=temperatures[st.top()]){
                st.pop();
            }

            ans[i]=st.empty()? 0 : st.top()-i;
            st.push(i);
        }

        return ans;
    }
};