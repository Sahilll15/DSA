class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> path;

        genSub(0, s, path, ans);

        return ans;
    }

    void genSub(int i, string& s, vector<string>& path,
                vector<vector<string>>& ans) {
        if (i == s.size()){
            ans.push_back(path);
            return;
        }

        for (int j = i; j < s.size(); j++) {
            string piece = s.substr(i, j - i + 1);
            if (isPalindrom(piece)) {
                path.push_back(piece);
                genSub(j+ 1, s, path, ans);
                path.pop_back();
            }
        }
    }

    bool isPalindrom(string piece) {
        int l = 0;
        int r = piece.size() - 1;
        while (l < r) {
            if (piece[l++] != piece[r--])
                return false;
        }

        return true;
    }
};