#include <stack>
#include <string>

using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st1;
        stack<char> st2;

        for(int i = 0; i < s.size(); i++) {
            if(s[i] != '#') {
                st1.push(s[i]);
            } else {
                if(!st1.empty()) {
                    st1.pop();
                }
            }
        }

        for(int i = 0; i < t.size(); i++) {
            if(t[i] != '#') {
                st2.push(t[i]);
            } else {
                if(!st2.empty()) {
                    st2.pop();
                }
            }
        }

        while(!st1.empty() && !st2.empty()) {
            if(st1.top() != st2.top()) {
                return false;
            } else {
                st1.pop();
                st2.pop();
            }
        }

        // If both stacks are empty, strings are equivalent after applying backspaces
        return st1.empty() && st2.empty();
    }
};
