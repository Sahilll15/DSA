class Solution {
  public:
    int lowerBound(vector<int>& arr, int target) {
        // code here
        int start=0;
        int end=arr.size()-1;
        int ans=arr.size();
        while(start<=end){
            int mid=start+(end-start)/2;
            
            if(arr[mid]>=target){
                ans=mid;
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        
        return ans;
    }
};
