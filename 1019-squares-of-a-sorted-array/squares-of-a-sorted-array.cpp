class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans;


        for(int i=0;i<nums.size();i++){
            int value=nums[i]*nums[i];
            ans.push_back(value);
        }

        sort(ans.begin(),ans.end());
        return ans;
    }
};