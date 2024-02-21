#include <vector>
using namespace std;

class Solution {
public:
    int firstOccurence(vector<int>& nums, int target, int n) {
        int low = 0;
        int high = n - 1;
        int first = -1;   
        while (low <= high) {
            int mid = low + (high - low) / 2;   
                
            if (target == nums[mid]) {
                first = mid;
                high = mid - 1;
            } else if (target < nums[mid]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return first;
    }

    int lastOccurence(vector<int>& nums, int target, int n) {
        int low = 0;
        int high = n - 1;
        int last = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;   
            
            if (target == nums[mid]) {
                last = mid;
                low = mid + 1;
            } else if (target < nums[mid]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return last;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int first = firstOccurence(nums, target, n);
        int last = lastOccurence(nums, target, n);
        return {first, last};
    }
};
