class Solution {
public:
    void findSumOfSubarrays(const vector<int>& arr, vector<int>& values) {
        int n = arr.size();
        for (int start = 0; start < n; ++start) {
            int currentSum = 0;
            for (int end = start; end < n; ++end) {
                currentSum += arr[end];
                values.push_back(currentSum);
            }
        }
    }

    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> values;
        findSumOfSubarrays(nums, values);

        sort(values.begin(), values.end());

         long long ans = 0; 
        for (int i = left - 1; i <= right - 1; ++i) {
            ans += values[i];
        }

        return ans % 1000000007;
    }
};
