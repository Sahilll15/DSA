class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>map;
        priority_queue<pair<int,int> , vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(int i=0;i<nums.size();i++){
                map[nums[i]]++;
        }

       for(auto [num,count]:map){
            pq.push({count,num});
            if(pq.size()>k){
                pq.pop();
            }
       }

        vector<int> ans;
       while(!pq.empty()){
        ans.push_back(pq.top().second);
        pq.pop();
       }

        return ans;
    }
};