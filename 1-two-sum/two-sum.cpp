class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;

        for(int i=0;i<nums.size();i++){
            int val=nums[i];

            for(int j=i+1;j<nums.size();j++){
                if(val+ nums[j]==target){
                    ans.push_back(i);
                    ans.push_back(j);
                     
                }
            }
        }

    return ans;
    }
};