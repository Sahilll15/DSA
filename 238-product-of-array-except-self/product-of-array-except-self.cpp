class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> leftProducts(n, 1);
        vector<int> rightProducts(n, 1);
        vector<int> result(n);

        // Fill leftProducts array
        for (int i = 1; i < n; ++i) {
            leftProducts[i] = leftProducts[i - 1] * nums[i - 1];
        }

        // Fill rightProducts array
        for (int i = n - 2; i >= 0; --i) {
            rightProducts[i] = rightProducts[i + 1] * nums[i + 1];
        }

        // Fill result array
        for (int i = 0; i < n; ++i) {
            result[i] = leftProducts[i] * rightProducts[i];
        }

        return result;
    }
};
