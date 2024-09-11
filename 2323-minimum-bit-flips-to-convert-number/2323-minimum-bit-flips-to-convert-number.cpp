class Solution {
public:
    int minBitFlips(int start, int goal) {
        int target=start^goal;
        return __builtin_popcount(target);
    }
};