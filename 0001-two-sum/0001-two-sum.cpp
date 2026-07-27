class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> ans;

        unordered_map<int,int> Mymap;

        for(int i=0;i<nums.size();i++){
            Mymap[nums[i]]=i;
        }

        for(int i=0;i<nums.size();i++){
        int required=target-nums[i];
        auto it = Mymap.find(required);
        if (it != Mymap.end() && it->second != i){
                ans.push_back(i);
                ans.push_back(Mymap[required]);
                break;
            }
        }

        return ans;
    }
};