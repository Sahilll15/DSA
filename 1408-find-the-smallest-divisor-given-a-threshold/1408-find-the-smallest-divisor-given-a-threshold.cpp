class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int start = 1;
        int end = *max_element(nums.begin(), nums.end());
        int ans = end;

        while (start < end) {
            int mid = start + (end - start) / 2;
            int sum = 0;

            for (int num : nums)
                sum += ceil((float)num / mid);

            if (sum <= threshold) {
                ans = mid;
                end = mid;
            } else {
                start = mid + 1;
            }
        }
        return ans;
    }
};
