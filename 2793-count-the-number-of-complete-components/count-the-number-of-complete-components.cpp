class Solution {
public:

void dfs(int i, vector<vector<int>>& adjLs, vector<int>& vis,
             vector<int>& component) {

        
        vis[i]=1;
        component.push_back(i);
        for(auto it : adjLs[i]){
            if(!vis[it]){
                dfs(it,adjLs,vis,component);
            }
        }
    }
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        
        vector<int>vis(n,0);
        int cnt=0;

       vector<vector<int>>adjLs(n);

        for (auto edge : edges) {

            int u = edge[0];
            int v = edge[1];

            adjLs[u].push_back(v);
            adjLs[v].push_back(u);
        }

        for(int i=0;i<n;i++){
            bool complete=true;
            if(!vis[i]){
                 vector<int> component;
                 dfs(i,adjLs,vis,component);
                  for (auto node : component) {

                    int requiredEdges = component.size() - 1;

                    if (adjLs[node].size() != requiredEdges) {
                        complete = false;
                        break;
                    }
                }

                if(complete){
                   cnt++; 
                }

                
            }
        }

        return cnt;
    }
};