class Solution {
public:
    int findMaxLength(vector<int>& nums) {

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                nums[i] = -1;
            }
        }

        unordered_map<int, int> mp;
        int sum = 0;
        int maxLen = 0;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];

            int target = sum - 0;

            if (sum == 0) {
                maxLen = i + 1;
            }
            if (mp.count(sum)) {
                 maxLen = max(maxLen, i - mp[sum]);
            } else {

                mp[sum] = i;
            }
        }

        return maxLen;
    }
};