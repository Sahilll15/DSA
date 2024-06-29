class Solution {
public:
    string reversePrefix(string word, char ch) {
        int characterIndex = -1;

        for (int i = 0; i < word.size(); i++) {
            if (word[i] == ch) {
                characterIndex = i;
                break;
            }
        }

        if (characterIndex != -1) {
            reverse(word.begin(), word.begin() + characterIndex + 1);
        }

        return word;
    }
};
