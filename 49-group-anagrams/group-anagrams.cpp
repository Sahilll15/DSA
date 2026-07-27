class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;

        unordered_map<string,vector<string>> strMap;

        for(string s: strs){
            string Str=s;
            sort(s.begin(),s.end());
            strMap[s].push_back(Str);
        }

        for(auto it:strMap){
            ans.push_back(it.second);
        }

        return ans;
    }
};