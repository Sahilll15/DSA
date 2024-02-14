class Solution {
public:
   int longestConsecutive(std::vector<int>& nums) {
        if (nums.empty())
            return 0;

        std::sort(nums.begin(), nums.end());
        int maxCount = 1;
        int currentCount = 1;

        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] != nums[i - 1]) {
                if (nums[i] == nums[i - 1] + 1) {
                    ++currentCount;
                } else {
                    maxCount = std::max(maxCount, currentCount);
                    currentCount = 1;
                }
            }
        }

        return std::max(maxCount, currentCount);
    }
};