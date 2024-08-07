class Solution {
public:
    int countQuadruplets(vector<int>& arr) {
        int c=0,n=arr.size();
        map<int,int>mp;
         for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                mp[arr[i]+arr[j]]++;
            }
            for(int k=i+2;k<n;k++){
                c+=mp[arr[k]-arr[i+1]];
            }
         }
         return c;
    }
};