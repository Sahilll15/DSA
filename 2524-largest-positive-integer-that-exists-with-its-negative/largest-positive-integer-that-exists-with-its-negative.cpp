class Solution {
public:
    int findMaxK(vector<int>& nums) {
        
        unordered_map<int,int>mpp;

        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }

        int maxValue=-1;

        for(int i=0;i<nums.size();i++){
            if(mpp.find(-nums[i])!=mpp.end()){
                maxValue=max(maxValue,nums[i]);
            }
        }

        return maxValue;
    }
};