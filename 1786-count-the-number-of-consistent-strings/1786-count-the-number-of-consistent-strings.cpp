#include <unordered_map>
#include <vector>
#include <string>

class Solution {
public:
    int countConsistentStrings(std::string allowed, std::vector<std::string>& words) {
        std::unordered_map<char, int> map;

        for (int i = 0; i < allowed.size(); i++) {
            map[allowed[i]]++;
        }

        int ans = 0;

        for (int i = 0; i < words.size(); i++) {
            bool flag = true;
            for (int j = 0; j < words[i].size(); j++) {
                if (map.find(words[i][j]) == map.end()) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                ans++;
            }
        }

        return ans;
    }
};
