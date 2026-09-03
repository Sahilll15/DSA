class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int count=0;    
        int left=0;
        int sum=0;
        for(int right=0;right<arr.size();right++){
            sum+=arr[right];

            if(right-left+1==k){
                int avgSum=sum/k;
                if(avgSum>=threshold){
                    count++;
                }
                sum-=arr[left];
                left++;
            }
        }

        return count;
    }
};