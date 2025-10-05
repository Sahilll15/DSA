class Solution {
public:
    int binarySearch(vector<int>& nums,int target,bool isFirst){
        int n=nums.size();
        int start=0;
        int end=n-1;

        int ans=-1;
        while(start<=end){
            int mid=start+(end-start)/2;

            if(nums[mid]==target){
                ans=mid;
                if(isFirst){
                    end=mid-1;
                }else{
                    start=mid+1;
                }
            }else if(nums[mid]<target){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }

        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
          return { binarySearch(nums, target, true),
                 binarySearch(nums, target, false) };

    }
};