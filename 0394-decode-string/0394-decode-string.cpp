#include <stack>
#include <string>
#include <cctype> 

class Solution {
public:
    string decodeString(string s) {
        
        
        stack<string> string_st; 
        stack<int> num_st;     

        string curr_value = "";
        int curr_num = 0;
        

        for(char c : s) {
            if(isdigit(c)) {
                curr_num = curr_num * 10 + (c - '0');
            } else if(isalpha(c)) {
                curr_value += c;
            } else if(c == '[') {
        
                num_st.push(curr_num);
                string_st.push(curr_value);
                
               
                curr_num = 0;
                curr_value = "";
            } else if(c == ']') {
                string temp_str = "";
                int repeat_count = num_st.top();
                num_st.pop();
                
                for(int i = 0; i < repeat_count; i++) {
                    temp_str += curr_value;
                }
                
                curr_value = string_st.top() + temp_str;
                string_st.pop();
            }
        }
        
        return curr_value;
    }
};