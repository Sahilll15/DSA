class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int totalSum=0;

        for(int i=0;i<nums.size();i++){
            totalSum+=nums[i];
        }

        int aliceSingle=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]<10){
                aliceSingle+=nums[i];
            }
        }

        int aliceDouble=0;

         for(int i=0;i<nums.size();i++){
            if(nums[i]>=10){
                aliceDouble+=nums[i];
            }
        }

        if(totalSum - aliceSingle < aliceSingle){
            return true;
        }else if(totalSum-aliceDouble < aliceDouble){
            return true;
        }else{
            return false;
        }



    }
};