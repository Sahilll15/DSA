class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                if (check(i, j, 0, board, word)) return true;
            }
        }
        return false;
    }

    bool check(int i, int j, int k, vector<vector<char>>& board, string& word) {
        if (k == word.size()) return true;

        if (i < 0 || j < 0 || i >= board.size() || j >= board[0].size())
            return false;

        if (board[i][j] != word[k])
            return false;

        char temp=board[i][j];
        board[i][j]='#';
        bool top = check(i - 1, j, k + 1, board, word);
        bool right = check(i, j + 1, k + 1, board, word);
        bool bottom = check(i + 1, j, k + 1, board, word);
        bool left = check(i, j - 1, k + 1, board, word);

        bool found= top || right || bottom || left;

        board[i][j]=temp;
        return found;
    }
};
