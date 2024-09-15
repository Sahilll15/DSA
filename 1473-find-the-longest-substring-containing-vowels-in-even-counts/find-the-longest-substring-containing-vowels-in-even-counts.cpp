class Solution {
public:
    int findTheLongestSubstring(string s) {
        int prefixXOR = 0;

        int characterMap[26] = {0};
        characterMap['a' - 'a'] = 1;
        characterMap['e' - 'a'] = 2;
        characterMap['i' - 'a'] = 4;
        characterMap['o' - 'a'] = 8;
        characterMap['u' - 'a'] = 16;
    
        vector<int> mp(32, -1);
        int longestSubstring = 0;

        for (int i = 0; i < s.length(); i++) {
            prefixXOR ^= characterMap[s[i] - 'a'];
            if (mp[prefixXOR] == -1 and prefixXOR != 0) mp[prefixXOR] = i;

            longestSubstring = max(longestSubstring, i - mp[prefixXOR]);
        }

        return longestSubstring;
    }
};