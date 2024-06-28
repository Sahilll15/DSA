class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> chars;
        int maxSize=0;
        int left=0;
        int right=0;

        while(right< s.size()){
            while(chars.find(s[right])!=chars.end()){
                  chars.erase(s[left]);
                ++left;
            }

             maxSize = max(maxSize, right - left + 1);
            
            chars.insert(s[right]);
            ++right;
        }

        return maxSize;
    }
};