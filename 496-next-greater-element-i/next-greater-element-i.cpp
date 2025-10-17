class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        stack<int> s;
        unordered_map<int,int> next;


        for(int i=nums2.size()-1;i>=0;--i){
            while(!s.empty() && s.top() <=nums2[i]){
                s.pop();
            }
            next[nums2[i]]=s.empty()? -1: s.top();
            s.push(nums2[i]);
        }
        

        for(int num:nums1){
            ans.push_back(next[num]);
        }


        return ans;
    }
};