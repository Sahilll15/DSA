class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<pair<int,int>> paired;

        for(int i=0;i<nums.size();i++){
            paired.push_back({nums[i],i});
        }
        sort(paired.begin(),paired.end());

        int l=0;
        int r=paired.size()-1;

        while(l<r){
            int sum=paired[l].first+paired[r].first;
            if(sum == target) return {paired[l].second,paired[r].second};
            else if(sum<target) l++;
            else r--;
        }

        return {};
    }
};