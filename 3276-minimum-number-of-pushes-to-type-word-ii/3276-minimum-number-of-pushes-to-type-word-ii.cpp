class Solution {
public:
    int minimumPushes(string word) {
        vector<int> values(26, 0);

        for(char c : word) {
            values[c - 'a']++;
        }

        sort(values.rbegin(), values.rend());

        int minKeyPress = 0;
        int count = 0;

        for(int i = 0; i < 26; ++i) {
            if (values[i] == 0) break;
            int multiplier = (count < 8) ? 1 : 
                             (count < 16) ? 2 : 
                             (count < 24) ? 3 : 4;
            minKeyPress += values[i] * multiplier;
            count++;
        }

        return minKeyPress;
    }
};
