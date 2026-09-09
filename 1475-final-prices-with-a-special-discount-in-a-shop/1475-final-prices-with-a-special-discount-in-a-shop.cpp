class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n=prices.size();
        vector<int> ans(n);
        stack<int>st;

        for(int i=prices.size()-1;i>=0;i--){
             while(!st.empty() && st.top()>prices[i]){
                st.pop();
             }   

             if(!st.empty()){
                ans[i]=prices[i]-st.top();
                 st.push(prices[i]);
             }else{
                st.push(prices[i]);
                ans[i]=prices[i];
             }
        }

        return ans;
    }
};