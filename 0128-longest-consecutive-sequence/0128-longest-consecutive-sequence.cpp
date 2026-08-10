class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet;
        if(nums.size()==0) return 0;
        int maxAns=1;
        int cnt=1;
        for(int i=0;i<nums.size();i++){
            numSet.insert(nums[i]);
        }

        for(auto it:numSet){
            if(numSet.find(it-1)==numSet.end()){
                int need=it;
                while(numSet.find(need+1)!=numSet.end()){
                    cnt++;
                    need++;
                }
                maxAns=max(maxAns,cnt);
                cnt=1;
            }
        }

        return maxAns;
    }
};