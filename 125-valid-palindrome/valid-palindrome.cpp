class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> chars;
        
   for (char c : s) {
            if (isalnum(c)) chars.push_back(tolower(c));
        }

        int left=0;
        int right=chars.size()-1;

        while(left<=right){
            if(chars[left]!=chars[right]){
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};