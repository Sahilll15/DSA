class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
        int maxlen=0;
        int left=0;
        int right=0;
        int zeros=0;

        while(right<nums.size()){
            
            if(nums[right]==0) zeros++;

            if(zeros<=k){
                maxlen=max(maxlen,right-left+1);

            }

            if(zeros>k){
                if(nums[left]==0) zeros--;
                left++;
            }


            right++;
        }

       
        return maxlen;
    }
};