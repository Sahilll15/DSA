#include <map>
#include <utility>

class Solution {
public:
    int helper(int count, int paste, int n, std::map<std::pair<int, int>, int>& cache) {
        if (count == n) {
            return 0;
        }
        if (count > n) {
            return 1000;
        }
        if (cache.find({count, paste}) != cache.end()) {
            return cache[{count, paste}];
        }

        // Paste
        int res1 = 1 + helper(count + paste, paste, n, cache);

        // Copy and Paste
        int res2 = 2 + helper(count + count, count, n, cache);

        cache[{count, paste}] = std::min(res1, res2);
        return cache[{count, paste}];
    }

    int minSteps(int n) {
        if(n==1){
            return 0;
        }
        std::map<std::pair<int, int>, int> cache;
        return 1 + helper(1, 1, n, cache);
    }
};
