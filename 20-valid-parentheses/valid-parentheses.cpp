class Solution {
public:
    bool isValid(string s) {
        
        stack<char> st;

        map<char, char> chars = {{'}', '{'}, {']', '['}, {')', '('}};
        for(int i=0;i<s.size();i++){
            int ch=s[i];
            if(ch =='(' || ch=='{' || ch=='['){
                st.push(ch);
            }else{
                if(st.empty() || st.top() !=chars[ch] ){
                    return false;
                }
                st.pop();
            }
            
        }

        return st.empty();
    }
};