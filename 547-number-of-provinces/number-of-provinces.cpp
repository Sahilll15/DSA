class Solution {
public:
    void dfs(int node, vector<vector<int>>& isConnected,
             vector<int>& visited) {


       visited[node]=1;

       for(auto it:isConnected[node]){
            if(!visited[it]){
            dfs(it,isConnected,visited);
            }
       }


    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int> visited(n,0);
        int cnt = 0;
        vector<vector<int>> adj(n);

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(isConnected[i][j]==1){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }

        for (int i = 0; i < n; i++) {
                if (!visited[i]) {
                    cnt++;
                    dfs(i, adj, visited);
                }
            
        }

        return cnt;
    }
};