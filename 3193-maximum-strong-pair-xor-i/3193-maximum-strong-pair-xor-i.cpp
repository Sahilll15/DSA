class Solution {
public:
    int maximumStrongPairXor(std::vector<int>& nums) {
        int maxXor = 0;
        int n = nums.size();
        
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (i != j && abs(nums[i] - nums[j]) <= min(nums[i], nums[j])) {
                    int currentXor = nums[i] ^ nums[j];
                    maxXor = max(maxXor, currentXor);
                }
            }
        }
        
        return maxXor;
    }
};
