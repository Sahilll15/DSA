class Solution {
public:
    vector<string> ans;
    void solve(int open,int close,string str,int n){
        if((open==close) && (open+close)==2*n){
            ans.push_back(str);
            return;
        }

        if(open<n){
            solve(open+1,close,str+"(",n);
        }

        if(close<open){
            solve(open,close+1,str+")",n);
        }
    }
    vector<string> generateParenthesis(int n) {
        solve(0,0,"",n);
        return ans;
    }
};