class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int leftProduct=1;
        int rightProduct=1;
        int ans=nums[0];

        for(int i=0;i<n;i++){
            leftProduct=leftProduct ==0 ? 1: leftProduct;
            rightProduct=rightProduct==0 ? 1:rightProduct;

            leftProduct=leftProduct*nums[i];
            rightProduct=rightProduct*nums[n-1-i];

            ans=max(ans,max(leftProduct,rightProduct));
        }

        return ans;
    }
};