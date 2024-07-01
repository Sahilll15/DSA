class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        unordered_map<int,int>mpp;

        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        int maximumCount = 0;
        int majorityElement = nums[0];


        for(auto it:mpp){
            if(it.second> maximumCount){
                maximumCount=it.second;
                majorityElement=it.first;
            }
        }

        return majorityElement;
    }
};