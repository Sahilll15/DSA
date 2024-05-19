class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int maxCount = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                if (count > 0) {
                    maxCount = count;
                }
                count = 0;
            } else {
                count++;
            }
        }
       
        if (count > 0) {
            maxCount = count;
        }
        return maxCount;
    }
};
