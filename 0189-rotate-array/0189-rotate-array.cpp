class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> mid(nums.size(),0);

        for(int i=0;i<nums.size();i++){
            mid[(i+k) % nums.size()]=nums[i];
        }

          for(int i=0;i<mid.size();i++){
            nums[i]=mid[i];
          }
    }
};