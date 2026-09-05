class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;

        map<int, int> numsMap;

        int left = 0;

        for (int right = 0; right < nums.size(); right++) {
            numsMap[nums[right]]++;

            if (right - left + 1 == k) {
                ans.push_back(numsMap.rbegin()->first);
                numsMap[nums[left]]--;

                if (numsMap[nums[left]] == 0) {
                    numsMap.erase(nums[left]);
                }

                left++;
            }
        }

        return ans;
    }
};