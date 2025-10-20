class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned;
    for(char c : s) {
        if(isalnum(c)) {          
            cleaned += tolower(c); 
        }
    }

    int start=0;
    int end=cleaned.size()-1;

    while(start<end){
        if(cleaned[start]!=cleaned[end]){
            return false;
        }

        start++;
        end--;
    }

    return true;
    }
};