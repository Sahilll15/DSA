class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        vector<int> ans = nums; 

        while(k != 0) {
            int min = INT_MAX;
            int index = 0;

     
            for(int i = 0; i < ans.size(); i++) {
                if(ans[i] < min) {
                    min = ans[i];
                    index = i;
                }
            }

     
            if(ans[index] > INT_MAX / multiplier) {
                cout << "Multiplication overflow detected. Stopping operation." << endl;
                return ans;  
            } else {
                ans[index] *= multiplier;
            }

            k--;  
        }

        return ans;
    }
};
