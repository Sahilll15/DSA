class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        stack<int> st;
        unordered_map<int,int> next;


        for(int i=nums2.size()-1;i>=0;i--){
           
           while(!st.empty() && st.top()<= nums2[i]){
            st.pop();
           }

           if(st.empty()){
            next.insert({nums2[i],-1});
           }else{
            next.insert({nums2[i],st.top()});
           }

           st.push(nums2[i]);
        }

        for(int num:nums1){
            ans.push_back(next[num]);
        }

        return ans;
    }
};