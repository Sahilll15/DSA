class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> prefix;
        prefix[0]=1;
        int ans=0;
        int sum=0;

        for(int num:nums){
            sum+=num;

            int target=sum-k;

            if(prefix.count(target)){
                ans+=prefix[target];
            }

            prefix[sum]++;
        }

        return ans;
    }
};