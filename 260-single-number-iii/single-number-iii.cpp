class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
        long XOR=0;

        for(int i=0;i<nums.size();i++){
            XOR=XOR^nums[i];
        }

        int rightmost=(XOR & (XOR-1)) ^ XOR;

        int XOR1=0;
        int XOR2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] & rightmost){
                XOR1=XOR1^nums[i];
            }else{
                XOR2=XOR2^nums[i];
            }
        }

        return {
            XOR2,XOR1
        };
    }
};