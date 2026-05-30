class Solution {
public:
    bool isAnagram(string s, string t) {
        int count[26]={0};
        if(s.size()!=t.size()){
            return false;
        }

        for(char c:s){
            count[c-'a']++;
        }

        for(char c:t){
            count[c-'a']--;
        }

        for(int v:count){
            if(v!=0){
                return false;
            }
        }

        return true;
    }
};