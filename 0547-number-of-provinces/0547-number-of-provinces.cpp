class Solution {
public:
    void dfs(int node,vector<int> &visited,vector<vector<int>>&adjList){
        visited[node]=1;
        for(int next:adjList[node]){
            if(!visited[next]){
                dfs(next,visited,adjList);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<vector<int>> adjList(n);

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
               if (isConnected[i][j] == 1 && i != j) {
                    adjList[i].push_back(j);
                    adjList[j].push_back(i);
                }
            }
        }

        vector<int> visited(n,0);
        int count=0;

        for(int i=0;i<n;i++){
            if(!visited[i]){
                count++;
                dfs(i,visited,adjList);
            }
        }

        return count;
    }
};