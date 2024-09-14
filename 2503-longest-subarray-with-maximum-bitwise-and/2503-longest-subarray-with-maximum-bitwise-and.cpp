class Solution 
{
public:
    int longestSubarray(vector<int>& nums) 
    {
        int maxi_val=0;
        
        for(auto it:nums)
            maxi_val = max(maxi_val, it);
        
        int cnt=1, maxi=1;
        
        for(int i=0; i<nums.size()-1; i++)
        {
            if(nums[i]==maxi_val && nums[i]==nums[i+1])
                cnt++;          
            else 
                cnt=1;
            
            maxi = max(maxi, cnt);
                
        }
        return maxi;
    }
};