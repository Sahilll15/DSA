class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int subArrayLen = INT_MAX;
        int left = 0;
        int currentSum = 0;
        
        for (int right = 0; right < nums.size(); ++right) {
            currentSum += nums[right];
            
            while (currentSum >= target) {
                subArrayLen = min(subArrayLen, right - left + 1);
                currentSum -= nums[left++];
            }
        }
        
        return (subArrayLen == INT_MAX) ? 0 : subArrayLen;
    }
};
