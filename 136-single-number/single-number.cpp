class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //basically xor1 ^ xor1 =0
        //xor of the same number gives zero
        int n=nums.size();
        int xor1=0;
        for(int i=0;i<n;i++){
            xor1=xor1 ^ nums[i];
        }

        return xor1;
    }   
};
