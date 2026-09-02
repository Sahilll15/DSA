class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long maxisum=0;
        long long sum=0;
        int left=0;
        unordered_map<int,int> numsMap;
        for(int right=0;right<nums.size();right++){
            numsMap[nums[right]]++;
            sum+=nums[right];

           while (numsMap[nums[right]] > 1) {
                numsMap[nums[left]]--;
                sum-=nums[left];
                left++;
            }

            if(right-left+1==k){
                maxisum=max(maxisum,sum);
                numsMap[nums[left]]--;
                sum-=nums[left];
                left++;
            }

        }
        return maxisum;
    }
};