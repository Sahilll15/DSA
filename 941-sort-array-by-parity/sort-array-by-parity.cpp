class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;

        while(left < right){
            if(isEven(nums[right]) && !isEven(nums[left])){
                swap(nums[left],nums[right]);
                left++;
                right--;
            }else if(isEven(nums[left])){
                left++;
            }else{
                right--;
            }
        }

        return nums;
    }

    bool isEven(int num){
        return num%2==0;
    }
};