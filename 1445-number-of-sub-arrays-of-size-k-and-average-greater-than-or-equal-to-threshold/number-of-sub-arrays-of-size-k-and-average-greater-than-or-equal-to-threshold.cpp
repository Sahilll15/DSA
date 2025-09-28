class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        
        int totalVal=0;
        int cnt=0;
        for(int i=0;i<k;i++){
            totalVal+=arr[i];
        }

          if(totalVal >= threshold * k)
            cnt++;

        for(int i=k;i<arr.size();i++){
            totalVal= totalVal + arr[i] - arr[i-k];
            
            if(totalVal >= threshold * k)
                cnt++;

        }

        return cnt;
    }
};