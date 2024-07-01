class Solution {
public:
    void swap(int& ele1, int& ele2, vector<int>& nums) {
        int temp = nums[ele1];
        nums[ele1] = nums[ele2];
        nums[ele2] = temp;
    }
    
    int removeElement(vector<int>& nums, int val) {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            while (left <= right && nums[left] != val) {
                left++;
            }
            while (left <= right && nums[right] == val) {
                right--;
            }

            if (left < right) {
                swap(left, right, nums);
                left++;
                right--;
            }
        }

        return left;
    }
};
