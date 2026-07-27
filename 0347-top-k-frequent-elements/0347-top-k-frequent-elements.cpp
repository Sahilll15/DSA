class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> topMap;

        for(int s:nums){
            topMap[s]++;
        }

         vector<pair<int,int>> v;             
        for (auto& [num, cnt] : topMap) {
        v.push_back({cnt, num});
         }   

         sort(v.rbegin(),v.rend());
          vector<int> ans;
    for (int i = 0; i < k; ++i) {
        ans.push_back(v[i].second);
    }
    return ans;

    }
};       