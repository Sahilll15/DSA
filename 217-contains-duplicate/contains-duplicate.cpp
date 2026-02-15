class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> numSet;

        for(int n:nums){
            if(numSet.find(n)!=numSet.end()){
                return true;
            }

            numSet.insert(n);
        }

        return false;
    }
};