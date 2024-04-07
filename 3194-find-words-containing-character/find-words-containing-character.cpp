class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        
        vector<int> ans;

        for(int i=0;i<words.size();i++){
            for(int k=0;k<words[i].size();k++){
               if(words[i][k] == x){
                ans.push_back(i);
                break;
               }
            }   
        }

        return ans;
    }
};