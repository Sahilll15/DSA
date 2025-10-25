class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> tMap;
         unordered_map<char,int> sMap;
        for(char ch:t){
            tMap[ch]++;
        }

        int i = 0;
        int minLen = INT_MAX;
        int start = 0; 
        int formed = 0;
        for(int j=0;j<s.size();j++){
            char ch=s[j];
            if(tMap.count(ch)){
                sMap[ch]++;
                if(sMap[ch]==tMap[ch]){
                    formed++;
                }
            }

            while(formed==tMap.size()){
                if(j-i+1 <minLen){
                    minLen=j-i+1;
                    start=i;
                }

                char leftChar=s[i];

                if(sMap.count(leftChar)){
                    sMap[leftChar]--;
                    if(sMap[leftChar]<tMap[leftChar]){
                        formed--;
                    }
                }
                i++;
            }
        }

        return (minLen == INT_MAX) ? "" : s.substr(start, minLen);
    }
};