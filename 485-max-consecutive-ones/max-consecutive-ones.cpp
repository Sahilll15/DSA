
class Solution {
public:
    int findMaxConsecutiveOnes(std::vector<int>& nums) {
        int n = nums.size();
        int max = 0;
        int count = 0;
        
        for (int i = 0; i < n; i++) {
            if (nums[i] == 1) {
                count++;
            } else {
                if (count > max) {
                    max = count;
                }
                count = 0;
            }
        }
        
        // Check if the last sequence of ones is greater than max
        if (count > max) {
            max = count;
        }

        return max;
    }
};
