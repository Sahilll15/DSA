class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;


        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }

        std::priority_queue<pair<int,int>>maxHeap;

        for(auto it:mpp){
            maxHeap.push({
                it.second,
                it.first
            });
        }

        vector<int>ans;
        while(k!=0){
            ans.push_back(maxHeap.top().second);
            maxHeap.pop();
            k--;
        }   
        return ans;
    }
};