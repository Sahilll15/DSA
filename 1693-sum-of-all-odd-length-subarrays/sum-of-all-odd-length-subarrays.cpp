class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {

        vector<vector<int>> subarrays;
        int ans=0;
        //create all the subarrays
        int n=arr.size();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){

                vector<int> subarray;
                for(int k=i;k<=j;k++){
                    subarray.push_back(arr[k]);
                }

                if(subarray.size()%2 == 1){
                    ans+=getSum(subarray);
                }
            }
        }

        return ans;
    }

    int getSum(vector<int> subarray){
        int ans=0;
        for(int i=0;i<subarray.size();i++){
            ans+=subarray[i];
        }
        return ans;
    }
};