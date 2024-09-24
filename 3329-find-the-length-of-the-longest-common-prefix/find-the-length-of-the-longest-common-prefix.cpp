class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<string>st;
     
        for(int i=0;i<arr1.size();i++)
        {
            string val=to_string(arr1[i]);
            string prefix;
            
            for(auto ch:val)
            {
                prefix+=ch;
                st.insert(prefix);
            }
        }
        int ans=0;
       
        for(int i=0;i<arr2.size();i++)
        {
            string val=to_string(arr2[i]);
            string prefix;
            for(auto ch:val)
            {
                prefix+=ch;
                if(st.count(prefix))ans=max(ans,(int)prefix.size());
            }
        }
        return ans;
        
    }
};