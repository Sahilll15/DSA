class Solution {
public:
    int findMin(vector<int>& nums) {
        int ans=INT_MAX;
        int n=nums.size();
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if (nums[low] <= nums[high]) {
            ans = min(ans, nums[low]);
            break;
        }


            if(nums[low]<= nums[mid]){
                ans=min(ans,nums[low]);
                low=mid+1;
            }else{
                ans=min(ans,nums[mid]);
                high=mid-1;
            }
        }

        return ans;
    }
};