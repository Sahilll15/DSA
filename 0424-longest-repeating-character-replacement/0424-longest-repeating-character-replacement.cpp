class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> count(26, 0);
        int i = 0, j = 0, maxCount = 0;
        int result = 0;
        while (i < s.length()) {
            count[s[i] - 'A']++;
            maxCount = max(maxCount, count[s[i] - 'A']);
            if (i - j + 1 - maxCount > k) {
                count[s[j] - 'A']--;
                j++;
            }
            result = max(result, i - j + 1);
            i++;
        }
        return result;
    }
};