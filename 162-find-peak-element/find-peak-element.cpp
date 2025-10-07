class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;
        int ans = 0;

    
        while (start <= end) {
            int mid = start + (end - start) / 2; 

           
            int left = (mid == 0) ? INT_MIN : nums[mid - 1];
            int right = (mid == nums.size() - 1) ? INT_MIN : nums[mid + 1];

            if (nums[mid] > left && nums[mid] > right) {
                ans = mid;
                break; 
            } else if (nums[mid] < right) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        return ans;
    }
};
