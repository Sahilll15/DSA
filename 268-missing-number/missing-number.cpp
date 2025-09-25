class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();

        sort(nums.begin(),nums.end());
        int ans;
        
        if(nums[n-1]!=(n)){
            ans= n;
            return ans;
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=i){
                return i;
            }
        }

        return  ans;
    }
    
};

