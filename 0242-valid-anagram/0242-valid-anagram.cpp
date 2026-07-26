class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;

        unordered_map<char,int> cnt;

        for(char c:s){
            cnt[c]++;
        }

        for(char c: t){
            cnt[c]--; 
            if(cnt[c]<0) return false;
        }

        return true;
    }
};