class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int pt1 = 0, pt2 = 0;
        vector<int> temp; 

    
        for(int i = 0; i < m + n; i++) {

            if(pt1 == m) {
                temp.push_back(nums2[pt2]);
                pt2++;
            }

            else if(pt2 == n) {
                temp.push_back(nums1[pt1]);
                pt1++;
            }

            else if(nums1[pt1] < nums2[pt2]) {
                temp.push_back(nums1[pt1]);
                pt1++;
            } else {
                temp.push_back(nums2[pt2]);
                pt2++;
            }
        }

        for(int i = 0; i < m + n; i++) {
            nums1[i] = temp[i];
        }
    }
};
