#include <string>

using namespace std;

class Solution {
public:
    string interpret(string command) {
        string ans;
        for (int i = 0; i < command.size(); i++) {
            if (command[i] == 'G') {
                ans.append("G");
            } else if (command[i] == '(' && i + 1 < command.size() && command[i + 1] == ')') {
                ans.append("o");
                i++; 
            } else {
                ans.append("al");
                i += 3; 
            }
        }
        return ans;
    }
};
