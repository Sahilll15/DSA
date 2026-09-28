class Solution {
public:
    void dfs(int sr, int sc, vector<vector<int>>& image, int color,
             vector<vector<int>>& visited, int startingPixle) {
        int n = image.size();
        int m = image[0].size();
        if (sr < 0 || sc < 0 || sr >= n || sc >= m ||
            image[sr][sc] != startingPixle) {
            return;
        }

            image[sr][sc] = color;
        

        int dr[] = {-1, 0, +1, 0};
        int dc[] = {0, +1, 0, -1};

        for (int i = 0; i < 4; i++) {
            int nr = sr + dr[i];
            int nc = sc + dc[i];

            dfs(nr, nc, image, color, visited, startingPixle);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int color) {

        int startingPixle = image[sr][sc];
        int n = image.size() - 1;
        int m = image[0].size() - 1;
        vector<vector<int>> visited(n, vector<int>(m, 0));

         if (startingPixle == color) {
            return image;
        }

        dfs(sr, sc, image, color, visited, startingPixle);
        return image;
    }
};