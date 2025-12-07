#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void bfs(int startNode, vector<vector<int>> &adj, int n)
{
    vector<int> visited(n, 0);
    queue<int> q;

    visited[startNode] = 1;
    q.push(startNode);

    while (!q.empty())
    {
        int frontNode = q.front();
        q.pop();

        cout << frontNode << " ";

        for (int neighbors : adj[frontNode])
        {
            if (!visited[neighbors])
            {
                visited[neighbors] = 1;
                q.push(neighbors);
            }
        }
    }

    cout << endl;
}
int main()
{
    int n = 4;
    vector<vector<int>> adj(n);

    adj[0].push_back(1);
    adj[1].push_back(0);

    adj[0].push_back(2);
    adj[2].push_back(0);

    adj[1].push_back(2);
    adj[2].push_back(1);

    adj[2].push_back(3);
    adj[3].push_back(2);

    adj[3].push_back(3);

    bfs(0, adj, n);

    return 0;
}