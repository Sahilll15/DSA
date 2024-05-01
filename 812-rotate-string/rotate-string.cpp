class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size())
        {
            return false;
        }
        string ans=s+s;
        if(ans.find(goal)==-1)
        {
            return false;
        }
        else
            return true;
    }
};