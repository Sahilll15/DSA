#include <iostream>
#include <vector>
using namespace std;

void dfs(int node, vector<int> &visited, vector<vector<int>> &adj)
{
    visited[node] = 1;
    cout << node << "";
    for (int neighbors : adj[node])
    {
        if (!visited[neighbors])
        {
            dfs(neighbors, visited, adj);
        }
    }
}
int main()
{
    int n = 4;
    vector<int> visited(n, 0);
    vector<vector<int>> adj(n);

    adj[0].push_back(1);
    adj[1].push_back(0);
    adj[0].push_back(2);
    adj[2].push_back(0);
    adj[2].push_back(1);
    adj[1].push_back(2);
    adj[2].push_back(3);
    adj[3].push_back(2);
    adj[3].push_back(3);

    cout << "THE DFS TRAVERSAL" << endl;
    dfs(0, visited, adj);
    return 0;
}