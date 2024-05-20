class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int alpha[26]={0};

        for(int i=0;i<s.length();i++){
            alpha[s[i]-'a']=i;
        }
        int result=0;

        for(int i=0;i<t.length();i++){
            result +=abs(i-alpha[t[i]-'a']);
        }

        return result;
    }
};