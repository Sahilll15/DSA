class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end()); 
        set<vector<int>> ansSet;
        vector<int> ds;

        genSub(0,nums,ds,ansSet);

        vector<vector<int>> ans;

        for (auto &v : ansSet) {
            ans.push_back(v);
    }


        return ans;
    }

    void genSub(int i,vector<int>& nums,vector<int>& ds,set<vector<int>>& ans){
        if(i==nums.size()){
            ans.insert(ds);
            return;
        }

        ds.push_back(nums[i]);
        genSub(i+1,nums,ds,ans);
        ds.pop_back();
        genSub(i+1,nums,ds,ans);
    }
};