class Solution {
public:
    bool isValid(string s) {
        
        stack<char> st;

        map<char, char> chars = {{'}', '{'}, {']', '['}, {')', '('}};

        for(int i=0;i<s.size();i++){
            if(s[i]=='('|| s[i]=='{' || s[i]=='['){
                st.push(s[i]);
            }else{
                if(st.empty()){
                    return false;
                }

                if(st.top()==chars[s[i]]){
                    st.pop();
                }else{
                    return false;
                }
            }
        }

        return st.empty();
    }
};