class Solution {
public:
    int maxVowels(string s, int k) {
        int max=0;
        int current=0;
        for(int i=0;i<k;i++){
            if(isVowel(s[i])){
                current++;
            }
        }

        max=current;


        for(int i=k;i<s.size();i++){
            if(isVowel(s[i])){
                current++;
            }
            if(isVowel(s[i-k])){
                current--;
            }

            if(current> max){
                max=current;
            }
        }

        return max;
    }

    bool isVowel(char a){
        return a=='a' || a=='e' || a=='i' || a=='o' || a=='u';

    }
};