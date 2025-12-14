class Solution {
public:
    void dfs(int node, vector<vector<int>>& adjList, vector<int>& visited) {
        visited[node] = 1;
        for (int neighbor : adjList[node]) {
            if (!visited[neighbor]) {
                dfs(neighbor, adjList, visited);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<vector<int>> adjList(n);
        vector<int> visited(n, 0);

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (isConnected[i][j] == 1) {
                    adjList[i].push_back(j);
                    adjList[j].push_back(i);
                }
            }
        }

        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                cnt++;
                dfs(i, adjList, visited);
            }
        }

        return cnt;
    }
};
