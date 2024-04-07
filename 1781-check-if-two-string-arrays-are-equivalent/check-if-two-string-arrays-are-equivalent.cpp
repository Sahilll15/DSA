class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
            
        string newword1;
        string newword2;
        for(int i=0;i<word1.size();i++){
            newword1+=word1[i];
        }

        for(int i=0;i<word2.size();i++){
            newword2+=word2[i];
        }

        if(newword1 == newword2){
            return true;
        }else{
            return false;
        }
    }
};