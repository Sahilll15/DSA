class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();

        if(n==0){
            return 0;
        }

        int maxReach=0;

        for(int i=0;i<nums.size();i++){
            if(i>maxReach) return false;
            maxReach=max(maxReach,i+nums[i]);
            if(maxReach>= n-1) return true;
        }

        return false;
    }
};