#include <vector>

using namespace std;

class Solution {
private:
    void dfs(int node, vector<bool>& visited, const vector<vector<int>>& adjList) {
        visited[node] = true;
        for (int neighbor : adjList[node]) {
            if (!visited[neighbor]) {
                dfs(neighbor, visited, adjList);
            }
        }
    }

public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<vector<int>> adjList(n);

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (isConnected[i][j] == 1 && i != j) {
                    adjList[i].push_back(j);
                    adjList[j].push_back(i);
                }
            }
        }

        vector<bool> visited(n, false);
        int cnt = 0;

        for (int i = 0; i < n; ++i) {
            if (!visited[i]) {
                cnt++;
                dfs(i, visited, adjList);
            }
        }

        return cnt;
    }
};
