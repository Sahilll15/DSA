class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> frequencyMap;
        for (int num : nums) {
            frequencyMap[num]++;
        }

        auto compare = [](pair<int, int>& a, pair<int, int>& b) {
            if (a.first != b.first) {
                return a.first > b.first;
            }
            return a.second < b.second;
        };

        priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(compare)> minHeap(compare);

        for (auto& entry : frequencyMap) {
            minHeap.push({entry.second, entry.first});
        }

        vector<int> result;
        while (!minHeap.empty()) {
            auto [freq, val] = minHeap.top();
            minHeap.pop();
            for (int i = 0; i < freq; i++) {
                result.push_back(val);
            }
        }

        return result;
    }
};