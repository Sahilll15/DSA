class Solution {
public:
    int countSubArrays(vector<int>&nums,int mid){
        int n=nums.size();
        int arraysCount=1;
        int sum=0;

        for(int i=0;i<nums.size();i++){
            if(sum+nums[i]<=mid){
                sum+=nums[i];
            }else{
                arraysCount++;
                sum=nums[i];
            }
        }

        return arraysCount;
    }
    int splitArray(vector<int>& nums, int k) {
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0); 
        int n=nums.size();
        if(k>n) return -1;


        while(low<=high){
            int mid=low+(high-low)/2;   
            int subArrays=countSubArrays(nums,mid);
            if(subArrays>k){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }

        return low;
    }
};