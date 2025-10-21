class Solution {
public:
    void sortColors(vector<int>& nums) {
        //using dutch flag algoritm

        int high=nums.size()-1;
        int mid=0;
        int low=0;

        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                mid++;
                low++;
            }else if(nums[mid]==1){
                mid++;
            }else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};