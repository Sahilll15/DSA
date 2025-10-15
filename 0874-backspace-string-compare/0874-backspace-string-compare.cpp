#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        return getString(s) == getString(t);
    }

    string getString(string s) {
        stack<char> st;

        for (char c : s) {
            if (c == '#') {
                if (!st.empty()) st.pop();  
            } else {
                st.push(c);
            }
        }

      
        string val;
        while (!st.empty()) {
            val += st.top();
            st.pop();
        }
 
        return val;
    }
};
