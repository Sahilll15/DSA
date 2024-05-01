class Solution {
public:
    string frequencySort(string s) {
        map<char, int> mp;
        string ans;

        
        for(int i = 0; i < s.length(); i++) {
            mp[s[i]]++;
        }

       
        vector<pair<int, char>> freq_chars;
        for(auto& entry : mp) {
            freq_chars.push_back({entry.second, entry.first});
        }


        sort(freq_chars.rbegin(), freq_chars.rend());

        
        for(auto& pair : freq_chars) {
            ans += string(pair.first, pair.second);
        }

        return ans;
    }
};