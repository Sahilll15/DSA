class Solution {
public:
    int minimumDeletions(string s) {
        int ans = 0, b = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i] == 'b') b++;
            else ans = min(ans+1, b);
        }
        return ans;
    }
};