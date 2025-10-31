class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int,int> map;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
        }

        for(const auto& pair : map){
            if(pair.second==2){
                ans.push_back(pair.first);
            }
        }

        return ans;
    }
};