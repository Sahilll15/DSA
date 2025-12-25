class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long ans = 0;

        sort(happiness.begin(), happiness.end(), greater<int>());

        int n = happiness.size();
        int dec = 0;  

        for (int count = 0; count < k && count < n; count++) {
            int curr = happiness[count] - dec;
            if (curr <= 0) break;

            ans += curr;
            dec++;  
        }

        return ans;
    }
};
