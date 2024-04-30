
class Solution {
public:
    string reverseWords(string s) {
        string reversedString;
        string temp;
        bool wordStarted = false;
        for(int i = s.size() - 1; i >= 0; i--) {
            if(s[i] != ' ') {
                temp += s[i];
                wordStarted = true;
            } else {
                if(wordStarted) {
                    std::reverse(temp.begin(), temp.end());
                    reversedString += (reversedString.empty() ? "" : " ") + temp;
                    temp = "";
                    wordStarted = false;
                }
            }
        }
        if(wordStarted) {
            std::reverse(temp.begin(), temp.end());
            reversedString += (reversedString.empty() ? "" : " ") + temp;
        }
        return reversedString;
    }
};
