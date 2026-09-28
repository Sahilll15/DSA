class Solution {
public:
    bool dfs(int curr,int destination,vector<vector<int>>& adjList,vector<bool>& visited ){
        
        if(curr==destination)return true;
        visited[curr]=true;

        for (int neighbor : adjList[curr]) {
        if (!visited[neighbor]) {
            if (dfs(neighbor, destination, adjList, visited)) {
                return true;
            }
        }
        }

        return false;
        
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
    
        vector<vector<int>> adjList(n);
        vector<bool> visited(n, false);
        
        
        for(auto edge:edges){
           int u=edge[0];
           int v=edge[1];

           adjList[u].push_back(v);
           adjList[v].push_back(u);
        }

        return dfs(source, destination, adjList, visited);
    }
};