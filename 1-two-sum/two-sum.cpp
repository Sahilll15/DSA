class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

            unordered_map<int,int> mpp;
                vector<int>ans;
            for(int i=0;i<nums.size();i++){
                mpp[nums[i]]=i;
            }

            for(int i=0;i<nums.size();i++){
                int valueToFind=target-nums[i];

                if(mpp.find(valueToFind)!=mpp.end() && mpp[valueToFind] != i){
                    ans.push_back(i);
                    ans.push_back(mpp[valueToFind]);
                   return ans;
                }
            }
              return {-1, -1};

    }
};