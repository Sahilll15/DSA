class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0;
        int minLen=INT_MAX;
        int n=nums.size();
        int sum=0;
        for(int right=0;right<n;right++){
             sum+=nums[right];

            while(sum>=target){
                minLen=min(minLen,right-left+1);
                sum-=nums[left];
                left++;
            }
        }

        return (minLen == INT_MAX) ? 0 : minLen;
    }
};