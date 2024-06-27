class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        stack<tuple<string, int, int>> stk; // tuple to store current string, open count, and close count
        stk.push({"(", 1, 0}); 
        while (!stk.empty()) {
            auto [current, openCnt, closeCnt] = stk.top();
            stk.pop();

            if (openCnt == n && closeCnt == n) {
                ans.push_back(current);
                continue;
            }

            if (openCnt < n) {
                stk.push({current + '(', openCnt + 1, closeCnt});
            }

            if (closeCnt < openCnt) {
                stk.push({current + ')', openCnt, closeCnt + 1});
            }
        }

        return ans;
    }
};
