class Solution {
public:
    vector<pair<int,int>> adj[200];
    int n;
    long long djikstra(int source, int destination){
        vector<int> dist(n,1e9+10);
        dist[source] = 0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        pq.push({0,source});
        while(!pq.empty()){
            int node = pq.top().second;
            pq.pop();
            for(auto it : adj[node]){
                if(dist[it.first]>dist[node] + it.second){
                    dist[it.first] = dist[node] + it.second;
                    pq.push({dist[it.first],it.first});
            }
            }
        }
        return dist[destination];
    }
    vector<vector<int>> modifiedGraphEdges(int N, vector<vector<int>>& edges, int source, int destination, int target) {
        n = N;
        for(auto& it : edges){
            int u = it[0],v = it[1],wt = it[2];
            if(wt==-1) continue;
            adj[u].push_back({v,wt});
            adj[v].push_back({u,wt});
        }
        int dist = djikstra(source,destination);
        if(dist<target) return {};
        if(dist==target){
            for(auto& it : edges){
                if(it[2]==-1) it[2] = 2e9;
            }
            return edges;
        }
        for(int i = 0;i<edges.size();i++){
            int u = edges[i][0],v = edges[i][1],wt = edges[i][2];
            if(wt==-1){
                edges[i][2] = 1;
                adj[u].push_back({v,1});
                adj[v].push_back({u,1});
                int d = djikstra(source,destination);
                if(d<=target){
                    edges[i][2] += target-d;
                    for(int j = i+1;j<edges.size();j++){
                        if(edges[j][2]==-1) edges[j][2] = 2e9;
                    }
                    return edges;
                }
            }
        }
        return {};
    }
};