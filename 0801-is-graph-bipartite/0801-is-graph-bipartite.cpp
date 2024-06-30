class Solution {
public:
    bool dfs(int node, vector<vector<int>>& graph, vector<int>& visited,int color) {
        
        visited[node]=color;

        for(auto it:graph[node]){
            if(visited[it]== -1){
                if(dfs(it,graph,visited,!visited[node]) == false){
                    return false;
                }
            }else if(visited[it] == visited[node]){
                return false;
            }
        }

        return true;
    }

    bool isBipartite(vector<vector<int>>& graph) {
        int v=graph.size();
        vector<int>visited(v,-1);

        for(int i=0;i<v;i++){
            if(visited[i] == -1 ){
                if(!dfs(i,graph,visited,0)){
                    return false;
                }
            }
        }

        return true;
    }
};