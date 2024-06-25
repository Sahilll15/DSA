class Solution {
public:
  
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagramGroups;
        
        for (const auto& str : strs) {
            string sortedStr = str;
            sort(sortedStr.begin(), sortedStr.end());
            anagramGroups[sortedStr].push_back(str);
        }

        vector<vector<string>> ans;
        for (auto& group : anagramGroups) {
            ans.push_back(group.second);
        }

        return ans;
    }
};