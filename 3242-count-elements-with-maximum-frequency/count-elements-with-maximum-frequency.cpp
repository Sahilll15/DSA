class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> frequencyMap;
        
        for (int num : nums) {
            frequencyMap[num]++;
        }
        
        priority_queue<pair<int, int>> maxHeap;
        for (auto& entry : frequencyMap) {
            maxHeap.push({entry.second, entry.first});
        }
        
        int maxFrequency = maxHeap.top().first;
        int total = 0;

        while (!maxHeap.empty() && maxHeap.top().first == maxFrequency) {
            total += maxHeap.top().first;
            maxHeap.pop();
        }

        return total;
    }
};