class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> s1Char(26,0);
        vector<int> windowChar(26,0);

        for(char ch:s1){
            s1Char[ch-'a']++;
        }
        int i=0;
        for(int j=0;j<s2.size();j++){
            char ch=s2[j];
            windowChar[ch-'a']++;

            if(j-i+1 > s1.size()){
                windowChar[s2[i]-'a']--;
                i++;
            }

            if(windowChar==s1Char){
                return true;
            }
        }
        return false;
    }
};