class Solution {
public:
    bool dfs(int start,vector<vector<int>>& graph,vector<int>& visited,int color){
        visited[start]=color;

        for(auto it:graph[start]){
            if(visited[it]==-1){
              if(!dfs(it,graph,visited,!color)){
                return false;
              }
            }else if(visited[it]==visited[start]){
                return false;
            }
        }

        return true;
    }   
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int> visited(n,-1);

        for(int i=0;i<n;i++){
             if(visited[i]== -1){
                if(!dfs(i,graph,visited,0)){
                    return false;
                }
             }
        }

        return true;
    }
};