class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int lastNonZero = 0; 

        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                swap(nums, i, lastNonZero); 
                lastNonZero++;
            }
        }
    }

    void swap(vector<int>& nums, int a, int b) {
        int temp = nums[a];
        nums[a] = nums[b];
        nums[b] = temp;
    }
};
