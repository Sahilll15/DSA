class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        int n=nums.size();

        vector<vector<int>> ans;

        int count=(1<<n);

        for(int val=0;val<count;val++){
            vector<int> subsets;

            for(int j=0;j<n;j++){
                if(val & (1<<j)){
                    subsets.push_back(nums[j]);
                }
            }

            ans.push_back(subsets);
        }


        return ans;
    }
};