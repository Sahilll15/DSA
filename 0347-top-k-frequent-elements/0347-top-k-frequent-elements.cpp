class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        vector<int> result;
        unordered_map<int,int>mpp;
     
        priority_queue<pair<int, int>> pq;

        for(auto n:nums){
            mpp[n]++;
        }


        for(auto &it:mpp){
            pq.push({
                it.second,it.first
            });
        }

        while(k>0){
            result.push_back(pq.top().second);
            pq.pop();
            k--;

        }

        return result;

    }
};