class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=(int)nums.size();
         if (n == 0) return 0;

        int w=1;
        for(int j=1;j<n;++j){
            if(nums[j]!=nums[w-1]) nums[w++]=nums[j];
        }

        return w;
    }
};