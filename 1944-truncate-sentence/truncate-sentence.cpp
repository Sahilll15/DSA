

class Solution {
public:
    string truncateSentence(std::string s, int k) { 
        std::string newString;
        int count = 0;
       
        for(char c:s){
            if(c==' '){
                count++;
                if(count == k){
                    break;
                }
            }
            
            newString+=c;
        }

        return newString;
    }
};
