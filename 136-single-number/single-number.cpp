class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        unordered_map<int, int> hash;

        for (int i = 0; i < n; i++) {
            hash[nums[i]]++;
        }

        for (int i = 0; i < n; i++) {
            if (hash[nums[i]] == 1) {
                ans = nums[i];
                break;
            }
        }

        return ans;
    }
};
