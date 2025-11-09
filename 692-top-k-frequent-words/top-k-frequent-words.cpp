class Solution {
public:
    struct cmp{
        bool operator()(const pair<int, string>& a, const pair<int, string>& b) const {
            if(a.first == b.first){
                return a.second>b.second;
            }
            return a.first <b.first;
        }
    };
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> freq;
        for (auto& w : words)
            freq[w]++;

        priority_queue<pair<int, string>, vector<pair<int, string>>, cmp> pq;

        for (auto& it : freq)
            pq.push({it.second, it.first});

        vector<string> ans;
        for (int i = 0; i < k && !pq.empty(); i++) {
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};