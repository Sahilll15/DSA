class Solution {
public:
    bool bfs(int node, vector<vector<int>>& graph, vector<int>& visited) {
        queue<int>q;
        q.push(node);
        visited[node]=0;

        while(!q.empty()){
            int node=q.front();
            q.pop();

            for(auto it:graph[node]){
                if(visited[it] == -1){
                    visited[it]=!visited[node];
                    q.push(it);
                }else if(visited[it] == visited[node]){
                    return false;
                }
            }


        }

        return true;
    }

    bool isBipartite(vector<vector<int>>& graph) {
        int v=graph.size();
        vector<int>visited(v,-1);

        for(int i=0;i<v;i++){
            if(visited[i] == -1 ){
                if(!bfs(i,graph,visited)){
                    return false;
                }
            }
        }

        return true;
    }
};