class Solution {
public:
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
        map<int, int> numsMap;

        vector<int> ans;

        int left = 0;

        for (int right = 0; right < nums.size(); right++) {
            numsMap[nums[right]]++;

            if (right - left + 1 == k) {

                int xthCount = 0;
                bool found = false;

                for (auto it : numsMap) {
                    if (it.first >= 0)
                        break;

                    xthCount += it.second;

                    if (xthCount >= x) {
                        ans.push_back(it.first);
                        found = true;
                        break;
                    }
                }

                if (!found) {
                    ans.push_back(0);
                }

                numsMap[nums[left]]--;
                left++;
            }
        }

        return ans;
    }
};