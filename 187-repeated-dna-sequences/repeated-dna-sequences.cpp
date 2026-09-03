class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> ans;

        int left=0;
        unordered_map<string,int>sMap;
        string currentString;
        for(int right=0;right<s.size();right++){
            currentString+=s[right];
            if(right-left+1==10){
                sMap[currentString]++;
                currentString.erase(0,1);
                left++;
            }
        }

        for(auto it:sMap){
            if(it.second>1){
                ans.push_back(it.first);
            }
        }

        return ans;
    }
};