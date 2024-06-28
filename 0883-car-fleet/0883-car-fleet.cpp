#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> nums;

        for (int i = 0; i < position.size(); i++) {
            nums.push_back({position[i], speed[i]});
        }

        sort(nums.begin(), nums.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.first > b.first;
        });

        stack<double> stk;

        for (int i = 0; i < nums.size(); i++) {
            double t = (double)(target - nums[i].first) / nums[i].second;

            if (stk.empty() || stk.top() < t) {
                stk.push(t);
            }
        }

        return stk.size();
    }
};
