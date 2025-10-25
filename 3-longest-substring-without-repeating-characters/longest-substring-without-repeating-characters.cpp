class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen=0;
        unordered_map<char,int> mapChar;

        if(s.size()==1){
            return 1;
        }
        

        int i=0;
        int j=0;
        while( j<s.size()){
            if(mapChar.count(s[j]) && mapChar[s[j]]>=i){           
                i = mapChar[s[j]] + 1;
            }
            mapChar[s[j]]=j;
             maxLen=max(maxLen,j-i+1);
             j++;
        }

        return maxLen ==0 ? s.size() : maxLen;
    }
};