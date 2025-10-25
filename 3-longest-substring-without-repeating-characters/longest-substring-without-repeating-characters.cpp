class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen=0;
        int i=0;
        int j=0;
        unordered_map<char,int> map;
        while(j<s.size()){
            if(map.count(s[j]) && map[s[j]] >=i ){
                i=map[s[j]]+1;
            }
            map[s[j]]=j;
            maxLen=max(maxLen,j-i+1);
            j++;
        }   

        return maxLen;
    }
};