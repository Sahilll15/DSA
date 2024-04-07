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
                i++; // Skip the next character as it's ')'
            } else {
                ans.append("al");
                i += 3; // Skip the next two characters as they're '(' and ')'
            }
        }
        return ans;
    }
};
