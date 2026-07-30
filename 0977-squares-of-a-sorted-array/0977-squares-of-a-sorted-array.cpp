class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans(nums.size(),-1);

        int start=0;
        int end=nums.size()-1;
        int writeIndex=nums.size()-1;
        while(start<=end){
            int startS=nums[start]*nums[start];
            int endS=nums[end]*nums[end];
            
           if (startS > endS) {ans[writeIndex] = startS;  start++;}
             else   {ans[writeIndex] = endS;    end--;};

            writeIndex--;
        }

        return ans;
    }
};