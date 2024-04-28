class Solution {
public:
    string sortVowels(string s) {
        string check ="AEIOU";

       int lower[26] = {0}; 
        int upper[26] = {0};
        for(int i=0;i<s.size();i++){
             if(s[i]=='a' || s[i] =='e'|| s[i]=='i' || s[i]=='o' || s[i]=='u'){
                lower[s[i]-'a']++;
                 s[i]='*';
            }
            if(s[i]=='A' || s[i] =='E'|| s[i]=='I' || s[i]=='O' || s[i]=='U'){
                upper[s[i]-'A']++;
                s[i]='*';
            }
        }
        string vowels ="";
        for(int i=0;i<26;i++){
            char ch = i+'A';
            while(upper[i]){
                vowels+=ch;
                upper[i]--;
            }
        }
        for(int i=0;i<26;i++){
            char ch = i+'a';
            while(lower[i]){
                vowels+=ch;
                lower[i]--;
            }
        }
        int j=0;
        int i =0;
        while(j<vowels.size()&& i<s.size()){
            if(s[i]=='*'){
                s[i]= vowels[j];
                j++;
            }
            i++;
        }
        return s;


        

    }
};