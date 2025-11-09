class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>map;
        priority_queue<pair<int,int>> pq;
        for(int i=0;i<nums.size();i++){
                map[nums[i]]++;
        }

       for(auto [num,count]:map){
            pq.push({count,num});
       }

      vector<int> result;
    for (int i = 0; i < k; i++) {
    result.push_back(pq.top().second);
    pq.pop();
}


        return result;
    }
};