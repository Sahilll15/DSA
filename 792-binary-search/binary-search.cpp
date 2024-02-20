class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();

        int low=0;
        int high=nums.size() -1;

        while(low<=high){
            int mid=(low+high)/2;

            if(target == nums[mid]) return mid;
            else if (target > nums[mid]) low=mid+1;
            else high=mid-1;
        } 

        return -1;
    }
};