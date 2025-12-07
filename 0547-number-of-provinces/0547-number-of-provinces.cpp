class Solution {
public:
    void dfs(int n, vector<int>& vis, vector<vector<int>>& adjList) {
        vis[n] = 1;
        for (auto next : adjList[n]) {
            if (!vis[next]) {
                dfs(next, vis, adjList);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<vector<int>> adjList(n);
        vector<int> vis(n, 0);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (isConnected[i][j] == 1 && i != j) {
                    adjList[i].push_back(j);
                    adjList[j].push_back(i);
                }
            }
        }

        int count = 0;

        for (int i = 0; i < n; i++) {
            if (!vis[i]) {     
                count++;
                dfs(i, vis, adjList);
            }
        }

        return count;
    }
};
