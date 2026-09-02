class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0){
            return 0;
        }
       int longest=1;

        int left=0;
        bool duplicate = false;

           for (int right = 1; right < s.size(); right++) {

            bool duplicate = false;

            for (int i = left; i < right; i++) {
                if (s[i] == s[right]) {
                    duplicate = true;
                    break;
                }
            }

            if (!duplicate) {
                longest = max(longest, right - left + 1);
            }
            else {
                left++;
                right--;
            }
        }

        return longest;
    }
};