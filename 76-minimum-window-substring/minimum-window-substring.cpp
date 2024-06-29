
class Solution {
public:
    string minWindow(string s, string t) {
        if (s.empty() || t.empty()) return "";

        unordered_map<char, int> tFreq, windowFreq;
        for (char c : t) tFreq[c]++;

        int l = 0, r = 0, required = tFreq.size(), formed = 0;
        int minLen = INT_MAX, minStart = 0;
        
        while (r < s.size()) {
            char c = s[r];
            windowFreq[c]++;
            
            if (tFreq.find(c) != tFreq.end() && windowFreq[c] == tFreq[c]) {
                formed++;
            }

            while (l <= r && formed == required) {
                char ch = s[l];
                
                if (r - l + 1 < minLen) {
                    minLen = r - l + 1;
                    minStart = l;
                }

                windowFreq[ch]--;
                if (tFreq.find(ch) != tFreq.end() && windowFreq[ch] < tFreq[ch]) {
                    formed--;
                }
                l++;
            }
            r++;
        }

        return minLen == INT_MAX ? "" : s.substr(minStart, minLen);
    }
};