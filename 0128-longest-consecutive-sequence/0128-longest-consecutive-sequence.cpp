#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        unordered_map<int, int> mpp;
        for (auto num : nums) {
            mpp[num]++;
        }

        int maxCnt = 0;

        for (auto num : nums) {
            if (mpp.find(num - 1) == mpp.end()) {
                int current = num;
                int cnt = 1;

                while (mpp.find(current + 1) != mpp.end()) {
                    current++;
                    cnt++;
                }

                maxCnt = max(maxCnt, cnt);
            }
        }

        return maxCnt;
    }
};
