#include <vector>
#include <queue>
#include <climits>

using namespace std;

class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        vector<vector<pair<int, int>>> adj(n);
        for (auto& edge : edges) {
            int from = edge[0], to = edge[1], cost = edge[2];
            adj[from].push_back({to, cost});
            adj[to].push_back({from, cost});
        }

        auto dijkstra = [&](int start) {
            vector<int> dist(n, INT_MAX);
            dist[start] = 0;
            priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
            pq.push({0, start});

            while (!pq.empty()) {
                int currDist = pq.top().first;
                int node = pq.top().second;
                pq.pop();

                if (currDist > dist[node]) continue;

                for (auto& neighbor : adj[node]) {
                    int nextNode = neighbor.first;
                    int weight = neighbor.second;
                    if (dist[node] + weight < dist[nextNode]) {
                        dist[nextNode] = dist[node] + weight;
                        pq.push({dist[nextNode], nextNode});
                    }
                }
            }
            return dist;
        };

        int result = -1;
        int minReachableCities = INT_MAX;

        for (int i = 0; i < n; ++i) {
            vector<int> distances = dijkstra(i);
            int reachableCities = 0;
            for (int j = 0; j < n; ++j) {
                if (i != j && distances[j] <= distanceThreshold) {
                    ++reachableCities;
                }
            }
            if (reachableCities <= minReachableCities) {
                minReachableCities = reachableCities;
                result = i;
            }
        }
        return result;
    }
};
