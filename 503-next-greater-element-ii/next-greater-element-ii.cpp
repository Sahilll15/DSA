class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        stack<int> st;
        

        for(int i=2*n;i>=0;i--){
            if(i>=n){
                st.push(nums[i%n]);
            }else{
                 while(!st.empty() && st.top()<=nums[i%n]){
                    st.pop();
                 }
                 ans[i%n]=st.empty()?-1:st.top();
                 st.push(nums[i%n]);
            }
        }
        return ans;
    }
};