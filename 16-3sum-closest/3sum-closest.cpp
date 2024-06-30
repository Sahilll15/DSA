#include <vector>
#include <unordered_map>
#include <queue>
#include <cmath>
#include <limits>

using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        priority_queue<int, vector<int>, greater<int>> pq;  
        unordered_map<int, int> hashmap;  

        for (int num : nums) {
            hashmap[num]++;
        }

        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                int firstValue = nums[i];
                int secondValue = nums[j];
                int thirdValue = target - (firstValue + secondValue);

                if (hashmap.find(thirdValue) != hashmap.end()) {
                    
                    if (thirdValue == firstValue && hashmap[thirdValue] < 2) continue;
                    if (thirdValue == secondValue && hashmap[thirdValue] < 2) continue;
                    if (thirdValue == firstValue && thirdValue == secondValue && hashmap[thirdValue] < 3) continue;

                    int diff = abs(target - (firstValue + secondValue + thirdValue));
                    pq.push(diff);
                }
            }
        }

        if (pq.empty()) {
            int closestSum = nums[0] + nums[1] + nums[2];
            for (int i = 0; i < nums.size() - 2; i++) {
                for (int j = i + 1; j < nums.size() - 1; j++) {
                    for (int k = j + 1; k < nums.size(); k++) {
                        int currentSum = nums[i] + nums[j] + nums[k];
                        if (abs(target - currentSum) < abs(target - closestSum)) {
                            closestSum = currentSum;
                        }
                    }
                }
            }
            return closestSum;
        }

        return target - pq.top();
    }
};
