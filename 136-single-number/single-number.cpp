class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        map<int, int> hash;
        int ans;

        for (int i = 0; i < n; i++) {
            hash[nums[i]]++;
        }

        for(auto it: hash){
            if(it.second == 1){
                ans=it.first;
            }
        }
    return ans;
    }   
};
