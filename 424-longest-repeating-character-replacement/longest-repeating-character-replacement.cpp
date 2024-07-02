class Solution {
public:
    int characterReplacement(std::string s, int k) {
        int left = 0;
        int maxCount = 0; 
        int maxLength = 0;
        std::unordered_map<char, int> count;

        for (int right = 0; right < s.size(); ++right) {
            count[s[right]]++;
            maxCount = std::max(maxCount, count[s[right]]);
            
           
            if (right - left + 1 - maxCount > k) {
                count[s[left]]--;
                left++;
            }
            
            maxLength = std::max(maxLength, right - left + 1);
        }

        return maxLength;
    }
};