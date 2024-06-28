#include <algorithm>
#include <string>

class Solution {
public:
    bool checkInclusion(std::string s1, std::string s2) {
        int windowSize = s1.size();
        
        if (windowSize > s2.size()) {
            return false;
        }
        
        int l = 0;
        int r = windowSize;

        std::string s1Sorted = s1;
        std::sort(s1Sorted.begin(), s1Sorted.end());

        while (r <= s2.size()) {
            std::string value = s2.substr(l, windowSize);
            
            std::string valueSorted = value;
            std::sort(valueSorted.begin(), valueSorted.end());

            if (valueSorted == s1Sorted) {
                return true;
            } else {
                l++;
                r++;
            }
        }
        return false;
    }
};
