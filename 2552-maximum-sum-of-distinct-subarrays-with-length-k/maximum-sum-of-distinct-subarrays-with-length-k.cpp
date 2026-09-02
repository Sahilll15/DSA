class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long maximum = 0;
        long long sum=0;
        int left = 0;
        unordered_map<int, int> numsMap;
        for (int right = 0; right < nums.size(); right++) {
        sum += nums[right];
        numsMap[nums[right]]++;
            
       while (numsMap[nums[right]] > 1) {
                sum -= nums[left];
                numsMap[nums[left]]--;
                left++;
            }

        if(right-left+1==k){
            maximum=max(maximum,sum);
            numsMap[nums[left]]--;
            sum-=nums[left];
            left++;
        }
    }

        return maximum;
    }
    
};