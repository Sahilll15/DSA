class Solution {
public:
    int findMin(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        int minValue=INT_MAX;

        while(left<=right){
            int mid=left+(right-left)/2;

            minValue=min(minValue,nums[mid]);

            if(nums[mid]>nums[right]){
                left=mid+1;
            }else{
                right=mid-1;
            }
        }

        return minValue;
    }
};