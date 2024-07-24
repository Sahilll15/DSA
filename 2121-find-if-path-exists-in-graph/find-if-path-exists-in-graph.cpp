class Solution {
public:
    void dfs(int node,vector<int>adj[],vector<int> &visited){
        visited[node]=1;

        for(auto neig:adj[node]){
            if(visited[neig] == 0){
                dfs(neig,adj,visited);
            }
        }
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
            vector<int> adj[n];

            vector<int> visited(n,0);

             for(auto it : edges)
        {
            int u = it[0];
            int v = it[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

         dfs(source , adj , visited);

        if(visited[destination] == 0)
        {
            return false;
        }
        else
        {
            return true;
        }

    }
};