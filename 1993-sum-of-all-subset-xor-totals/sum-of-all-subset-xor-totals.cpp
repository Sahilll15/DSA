#include <vector>
using namespace std;

class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int totalXORSum = 0;
        int n = nums.size();

        int subsetCount = 1 << n; 

        for (int i = 0; i < subsetCount; ++i) {
            int currentXOR = 0;

            for (int j = 0; j < n; ++j) {
             
                if (i & (1 << j)) {
                    currentXOR ^= nums[j];
                }
            }

            totalXORSum += currentXOR;
        }

        return totalXORSum;
    }
};
