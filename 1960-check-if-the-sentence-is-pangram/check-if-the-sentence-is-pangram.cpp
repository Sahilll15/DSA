class Solution {
public:
    bool checkIfPangram(string sentence) {
        
        vector<bool> alpha(26,0);

        for(int i=0;i<sentence.size();i++){
            
            alpha[sentence[i]-'a']=1;
        }

        for(int i=0;i<alpha.size();i++){

            if(alpha[i]==0){
            return false;
            }

        }
        return true;
    }
};