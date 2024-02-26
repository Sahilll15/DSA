class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;
            
            if (mid % 2 == 1) {
                if (nums[mid] == nums[mid - 1])
                    low = mid + 1;
                else
                    high = mid - 1;
            } else {
                if (nums[mid] == nums[mid + 1])
                    low = mid + 2;
                else
                    high = mid;
            }
        }

        return nums[low];
    }
};
