class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long maxLen = 0;
        unordered_map<int, int> map;
        int i = 0;

        long long sum = 0;
        for (int j = 0; j < nums.size(); j++) {
            if (map.count(nums[j])) {

                while (map.count(nums[j])) {
                    sum -= nums[i];
                    map.erase(nums[i]);
                    i++;
                }
            }

            sum = sum +(long long) nums[j];
            map[nums[j]] = j;

            while (j - i + 1 > k) {
                sum -= nums[i];
                map.erase(nums[i]);
                i++;
            }

            if(j-i+1 == k){
                maxLen = max(maxLen,(long long) sum);
            }
        }

        return maxLen;
    }
};