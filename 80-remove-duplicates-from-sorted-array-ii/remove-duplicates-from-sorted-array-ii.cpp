class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;

        unordered_map<int,int>mpp;


        int j=0;

        for(int i=0;i<nums.size();i++){
                mpp[nums[i]]++;

                if(mpp[nums[i]]<=2){
                    nums[j]=nums[i];
                    j++;
                }
        }

        return j;
    }
};