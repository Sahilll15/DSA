class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        auto high=*max_element(nums.begin(),nums.end());
        int n=nums.size();

        int ans=0;

        while(low<=high){
            int mid=low+(high-low)/2;
            int sum=0;
            for(int i=0;i<n;i++){
                sum += ceil((float)nums[i]/mid);
            } 

            if(sum<=threshold){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }  
        }

    return ans;
    }
};