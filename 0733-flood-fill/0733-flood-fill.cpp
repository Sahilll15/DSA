class Solution {
public:
    void dfs(int sr, int sc, vector<vector<int>>& image, int color, int startingColor) {
        int row = image.size();
        int col = image[0].size();
      
        if (sr < 0 || sr >= row || sc < 0 || sc >= col ||
            image[sr][sc] != startingColor) {
            return;
        }

          if (image[sr][sc] == startingColor) {
            image[sr][sc] = color;
        }


        int r[] = {-1, 0, +1, 0};
        int c[] = {0, +1, 0, -1};

        for (int i = 0; i < 4; i++) {
                dfs(r[i] + sr, c[i] + sc, image, color, startingColor);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int color) {

        int row = image.size();
        int col = image[0].size();

        int startingColor = image[sr][sc];

       if (startingColor == color) {
            return image;
        }

        dfs(sr, sc, image, color, startingColor);

        return image;

    }
};