class Solution {
public:
    vector<string> letterCombinations(string digits) {

        if(digits.empty()){
            return {};
        }
        unordered_map<char, vector<char>> phone_board = {
            {'1', {}},
            {'2', {'a', 'b', 'c'}},
            {'3', {'d', 'e', 'f'}},
            {'4', {'g', 'h', 'i'}},
            {'5', {'j', 'k', 'l'}},
            {'6', {'m', 'n', 'o'}},
            {'7', {'p', 'q', 'r', 's'}},
            {'8', {'t', 'u', 'v'}},
            {'9', {'w', 'x', 'y', 'z'}}};

        vector<string> ans;

        findLetters(0,phone_board,ans,digits,"");
        return ans;
    }

    void findLetters(int i,unordered_map<char, vector<char>>& board,vector<string>& ans,string digits ,string current){
        if(i==digits.size()){
            ans.push_back(current);
            return;
        }

        for (char letter:board[digits[i]]){
            findLetters(i+1,board,ans,digits,current+letter);
        }


    }
};