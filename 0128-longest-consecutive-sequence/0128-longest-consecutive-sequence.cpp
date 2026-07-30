class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> Set;
        
        int maxCount=0;
        for(int i=0;i<nums.size();i++){
            Set.insert(nums[i]);
        }

        for(int x:Set){
            int current=0;
            if(!Set.count(x-1)){
                int value=x;
                while(Set.count(value)){
                    current+=1;
                    value++;
                }
            }
            maxCount=max(maxCount,current);
        }
            return maxCount;
    }
};