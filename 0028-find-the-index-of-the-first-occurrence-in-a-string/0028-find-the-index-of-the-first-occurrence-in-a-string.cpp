class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.size()<needle.size())
        {
            return -1;
        }
        if((haystack).find(needle)!=string::npos)
        {
            return (haystack).find(needle);
        }
      return -1;  
    }
};