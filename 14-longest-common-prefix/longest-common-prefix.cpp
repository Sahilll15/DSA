class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string longest;
        string temp;

        longest=strs[0];

        for (int i = 1; i < strs.size(); i++) { 
            temp.clear();

            for (int j = 0; j < strs[i].size() && j < longest.size(); j++) {
                if (strs[i][j] == longest[j]) {
                    temp += longest[j]; 
                } else {
                    break; 
                }
            }

            longest = temp; 
        }

        return longest;
    }
};