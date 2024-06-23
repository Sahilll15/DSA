class Solution {
public:
    int maxProduct(vector<int>& nums) {
        std::priority_queue<int> maxHeap;

        for (auto num : nums) {
            maxHeap.push(num);
        }

        int ele1 = maxHeap.top();
        maxHeap.pop();
        int ele2 = maxHeap.top();
        maxHeap.pop();

        return (ele1 - 1) * (ele2 - 1);
    }
};
