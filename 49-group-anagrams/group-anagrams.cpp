class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
            unordered_map<string,vector<string>>SortedString;

            for(auto& str:strs){
                string sorted=str;
                sort(sorted.begin(),sorted.end());
                SortedString[sorted].push_back(str);
            }

            vector<vector<string>>ans;

            for(auto& it:SortedString ){
                ans.push_back(it.second);
            }

            return ans;
    }
};