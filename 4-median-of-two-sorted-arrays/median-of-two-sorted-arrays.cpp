#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
     
        vector<int> merged;
        merged.insert(merged.end(), nums1.begin(), nums1.end());
        merged.insert(merged.end(), nums2.begin(), nums2.end());


        sort(merged.begin(), merged.end());

        int n = merged.size();
        
        if (n % 2 == 0) {
            int mid1 = n / 2 - 1;
            int mid2 = n / 2;
            return (merged[mid1] + merged[mid2]) / 2.0;
        } else { 
            int mid = n / 2;
            return merged[mid];
        }
    }
};
