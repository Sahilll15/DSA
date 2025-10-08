class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int ans = -1;
        int count = k;
        int j = 0; 

        for (int i = 1; i <= arr.size() + k; i++) {
            
            if (j < arr.size() && arr[j] == i) {
                j++;
            } else {
                
                count--;
            }

            if (count == 0) {
                ans = i;
                break;
            }
        }
        return ans;
    }
};
