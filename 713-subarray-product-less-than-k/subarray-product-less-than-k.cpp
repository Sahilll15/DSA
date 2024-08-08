#include <vector>

using namespace std;

class Solution {
public:
    int generateAllSubarrays(const vector<int>& arr, int k) {
        int count = 0;

        int n = arr.size();
        for (int start = 0; start < n; ++start) {
            int product = 1;
            for (int end = start; end < n; ++end) {
                product *= arr[end];
                if (product < k) {
                    count++;
                } else {
                    break; 
                }
            }
        }

        return count;
    }

    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (k <= 1) return 0; 
        return generateAllSubarrays(nums, k);
    }
};
