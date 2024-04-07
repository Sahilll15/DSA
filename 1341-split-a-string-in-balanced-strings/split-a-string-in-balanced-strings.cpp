class Solution {
public:
    int balancedStringSplit(string s) {
        int cnt1=0;
        int cnt2=0;
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i] == 'R'){
                cnt1++;
            }if(s[i]== 'L'){
                cnt2++;
            }if(cnt1 == cnt2){
                ans++;
                cnt1=0;
                cnt2=0;
            }
        }
        return ans;
    }
};