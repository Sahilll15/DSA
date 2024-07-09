class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char, int>> st;
        for(int i = 0; i<s.size(); ++i){
            if(!st.empty() && st.top().first == s[i]){
                pair<char, int> temp = st.top();
                st.pop();
                if(temp.second < k - 1) st.push({temp.first, temp.second + 1});
            }
            else st.push({s[i], 1});
        }
        string res;
        while(!st.empty()){
            while(st.top().second--)
                res += st.top().first;
            st.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};