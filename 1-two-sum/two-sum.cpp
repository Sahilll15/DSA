class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int> map;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            map[nums[i]]=i;
        }

        for(int i=0;i<nums.size();i++){
            int value=target-nums[i];
            if(map.count(value) && map[value]!=i){
                return {i,map[value]};
            }
        }

        return {};
    }
};