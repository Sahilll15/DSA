class Solution {
public:
    static int squaredDis(vector<int>& points) {
        return points[0] * points[0] + points[1] * points[1];
    }

    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, vector<int>>> maxHeap;

        for (auto& p : points) {
            int dist = squaredDis(p);
            if (maxHeap.size() < k)
                maxHeap.push({dist, p});
            else if (dist < maxHeap.top().first) {
                maxHeap.pop();
                maxHeap.push({dist, p});
            }
        }

        vector<vector<int>> res;
        while (!maxHeap.empty()) {
            res.push_back(maxHeap.top().second);
            maxHeap.pop();
        }
        return res;
    }
};
