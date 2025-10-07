class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int start = *max_element(weights.begin(), weights.end());
        int end = accumulate(weights.begin(), weights.end(), 0);
        int ans = end;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            
            int daysNeeded = 1, current = 0;
            for (int w : weights) {
                if (current + w > mid) {
                    daysNeeded++;
                    current = 0;
                }
                current += w;
            }

            if (daysNeeded <= days) {
                ans = mid;
                end = mid - 1; 
            } else {
                start = mid + 1; 
            }
        }

        return ans;
    }
};
