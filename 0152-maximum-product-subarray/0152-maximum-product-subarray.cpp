class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxProductVal = nums[0];
        int currentMax = nums[0];
        int currentMin = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < 0) {
                swap(currentMax, currentMin);
            }

            int tempMax = max(nums[i], currentMax * nums[i]);
            int tempMin = min(nums[i], currentMin * nums[i]);

            currentMax = tempMax;
            currentMin = tempMin;

            maxProductVal = max(maxProductVal, currentMax);
        }

        return maxProductVal;
    }
};
