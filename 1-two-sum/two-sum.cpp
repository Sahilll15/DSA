class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mpp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int num=nums[i];
            int moreNeeded=target-num;

            if(mpp.find(moreNeeded) != mpp.end()){
                return {i,mpp[moreNeeded]};
            }
            mpp[num]=i;
        }
        return {-1,-1};
    }
};