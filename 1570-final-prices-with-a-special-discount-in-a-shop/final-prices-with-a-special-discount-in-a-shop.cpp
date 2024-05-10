class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> ans(prices.size()); 

        for (int i = 0; i < prices.size(); i++) {
            int discount = prices[i];
       
            for (int j = i + 1; j < prices.size(); j++) {
                if (prices[j] <= prices[i]) {
                    discount = prices[i] - prices[j]; 
                    break; 
                }
            }

            ans[i] = discount;
        }

        return ans;
    }
};