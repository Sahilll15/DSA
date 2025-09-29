class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> map;
        int l=0;
        int maxLen=0;

        for(int r=0;r<s.size();r++){
            if(map.find(s[r]) != map.end() && map[s[r]] >= l){
               l=map[s[r]]+1;
            }


            map[s[r]]=r;
            maxLen=max(maxLen,r-l+1);
        }

        return maxLen;
    }
};