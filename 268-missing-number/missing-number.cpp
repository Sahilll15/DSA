class Solution {
public:
    int missingNumber(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        int start=0;
        int end=nums.size()-1;
        int pos=-1;
        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] > mid) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }

        return start;
    }
};
