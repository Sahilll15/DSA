class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int idx=-1;

        //this is to find the breka point of the prefix array
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                idx=i;
                break;
            }
        }

       
        if(idx== -1){
             //if the idx of the array is the last then just revserse it to get the first premutation
            reverse(nums.begin(),nums.end());
        }else{
            //else 
            //sarting from the backwards find the first element greater then the elemnt at the index and the swap it 
            
            for(int i=n-1;i>idx;i--){
            if(nums[i]>nums[idx]){
                swap(nums[i],nums[idx]);
                break;
            }
        }

        //after swapping to the get the smallest permutation in the 
        //end and the last half just reverse the array starting from the 
        //element plus one to the end of the array
        reverse(nums.begin()+idx+1,nums.end());

        }
        
    }
};