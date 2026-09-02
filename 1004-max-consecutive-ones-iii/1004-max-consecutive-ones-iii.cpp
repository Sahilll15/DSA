class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int longest = 0;
        int left = 0;
        int currLen = 0;

        for (int right = 0; right < nums.size(); right++) {
            if (nums[right] == 0) {
                k--;
            }
            currLen++;

            if (k < 0) {
                if (nums[left] == 0) {
                    k++;
                }
                left++;
                currLen--;
            }

            longest = max(longest, currLen);
        }

        return longest;
    }
};