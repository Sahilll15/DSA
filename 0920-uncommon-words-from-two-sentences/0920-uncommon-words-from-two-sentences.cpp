class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        
        unordered_map<string, int> values;
        vector<string> ans;
        string value;

        for (int i = 0; i < s1.size(); i++) {
            if (s1[i] != ' ') {
                value += s1[i];
            } else {
                if (!value.empty()) {
                    values[value]++;
                    value = "";
                }
            }
        }

        if (!value.empty()) {
            values[value]++;
        }

        value = "";

        for (int i = 0; i < s2.size(); i++) {
            if (s2[i] != ' ') {
                value += s2[i];
            } else {
                if (!value.empty()) {
                    values[value]++;
                    value = "";
                }
            }
        }

        if (!value.empty()) {
            values[value]++;
        }

        for (auto& it : values) {
            if (it.second == 1) {
                ans.push_back(it.first);
            }
        }

        return ans;
    }
};
