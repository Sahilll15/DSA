class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();

        vector<int> vis(n, -1);

        queue<int> q;

        vis[0] = 1;
        q.push(0);

        while (!q.empty()) {
            int node = q.front();
            q.pop();

            for (int i = 0; i < rooms[node].size(); i++) {
                int nextRoom = rooms[node][i];

                if (vis[nextRoom] == -1) {
                    vis[nextRoom] = 1;
                    q.push(nextRoom);
                }
            }
        }

        for (int i = 0; i < n; i++) {
            if (vis[i] == -1)
                return false;
        }

        return true;
    }
};