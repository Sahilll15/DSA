class Solution {
public:
      vector<int>findNSE(vector<int>& arr){
        int n=arr.size();
        vector<int>ans(n);

        stack<int> st;

        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[st.top()]>arr[i]){
                st.pop();
            }

            ans[i]=!st.empty() ? st.top() :n;

            st.push(i);
        }

        return ans;
    }

    vector<int> findPSE(vector<int>& arr){
        int n=arr.size();
        stack<int> st;
        vector<int> ans(n);

        for(int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()]>=arr[i]){
                st.pop();
            }
            ans[i]=!st.empty() ? st.top() : -1;
            st.push(i);
        }

        return ans;
    }
    int sumSubarrayMins(vector<int>& arr) {
        vector<int> nse=findNSE(arr);
        vector<int> pse=findPSE(arr);
        int n =arr.size();
        int mod = 1e9 + 7;
        
            long long sum=0;

            for(int i=0;i<n;i++){
                int left=i-pse[i];
                int right=nse[i]-i;

                long long freq=1LL * left * right;
                int val=(freq*arr[i]*1LL)%mod;
                sum = (sum + val) % mod;
            }

            return sum;
    }
};