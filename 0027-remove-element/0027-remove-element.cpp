class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int left = 0;
        int right = n - 1;

        while (left <= right) {
            if (nums[left] == val && nums[right] != val) {
                swap(nums[left], nums[right]);
                left++;
                right--;
            } else if (nums[left] != val) {
                left++;
            } else { 
                right--;
            }
        }

        return left; 
    }
};
