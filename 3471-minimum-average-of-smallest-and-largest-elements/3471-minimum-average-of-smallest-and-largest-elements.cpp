class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        int left = 0;
    int right = nums.size() - 1;
    double min_avg = numeric_limits<double>::max();
    sort(nums.begin(), nums.end());

    while (left <= right) {
        double avg = nums[left] + nums[right];
        avg = avg / 2;
        min_avg = min(avg, min_avg);
        left++;
        right--;
    }

    return min_avg;
    }
};