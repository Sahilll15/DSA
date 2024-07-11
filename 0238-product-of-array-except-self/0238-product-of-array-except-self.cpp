class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();

        vector<int>leftProduct(n);
        vector<int>rightProduct(n);
        vector<int>ans(n);

        leftProduct[0]=1;
        for(int i=1;i<nums.size();i++){
            leftProduct[i]=leftProduct[i-1]*nums[i-1];
        }

        rightProduct[n-1]=1;
        for(int i=nums.size()-2;i>=0;i--){
            rightProduct[i]=rightProduct[i+1]*nums[i+1];
        }

        for(int i=0;i<ans.size();i++){
            ans[i]=leftProduct[i]*rightProduct[i];
        }

        return ans;
    }
};