class Solution {
public:
    int countSubstrings(string s) {
        int ans=0;
        genSub(0,s,ans);
        return ans;
    }

    void genSub(int i,string& s,int& ans){
        if(i==s.size()) return;

        for(int j=i;j<s.size();j++){
            string piece=s.substr(i,j-i+1);
            if(isPalindrom(piece)){
                ans++;
            }
        }
        
        genSub(i+1,s,ans);
    }

    bool isPalindrom(string piece){
        int l=0;
        int r=piece.size()-1;
        while(l<r){
            if(piece[l++]!=piece[r--]) return false;
        }

        return true;
    }
};