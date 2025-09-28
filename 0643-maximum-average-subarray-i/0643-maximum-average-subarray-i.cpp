class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        double currentSum=0;
        double maxSum=0;

        for(int i=0;i<k;i++){
            currentSum+=nums[i];
        }

        maxSum=currentSum / k ;


        for(int i=k;i<nums.size();i++){
            currentSum+=nums[i] - nums[i-k];

            if( maxSum < currentSum/k ){
                maxSum=currentSum/k;
            }
        }

    return maxSum;
    }
};