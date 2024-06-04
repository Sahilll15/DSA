#include <vector>
#include <string>
#include <algorithm>

class Solution {
public:
    int numberOfSubstrings(std::string s) {
        std::vector<int> lastSeen(3, -1); 
        int cnt = 0;

        for (int i = 0; i < s.size(); i++) {
            lastSeen[s[i] - 'a'] = i; 

            int minLastSeen = std::min({lastSeen[0], lastSeen[1], lastSeen[2]});

            if (minLastSeen != -1) {
                cnt += minLastSeen + 1; 
            }
        }

        return cnt;
    }
};
