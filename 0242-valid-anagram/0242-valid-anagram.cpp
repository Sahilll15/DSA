class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> sMap;
        unordered_map<char,int> tMap;

        if(s.size()!=t.size()){
            return false;
        }

        for(int i=0;i<s.size();i++){
            sMap[s[i]]++;
        }

        for(int i=0;i<t.size();i++){
            tMap[t[i]]++;
        }

        for(auto it:sMap){
            if(tMap[it.first]!=it.second){
                return false;
            }
        }

        return true;
    }
};