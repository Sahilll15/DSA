class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int operations=0;


        for(int i=0;i<nums.size();i++){
            if(nums[i]==3 || nums[i]==0){
                continue;
            }else if(nums[i]==1 || nums[i]==2){
                operations++;
            }else{
                int value=nums[i]%3;

                if(value==1 || value ==2){
                    operations++;
                }

            }
        }

        return operations;
    }
};