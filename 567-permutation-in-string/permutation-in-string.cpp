class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int window=s1.size();
        vector<int> s1Freq(26, 0);
        vector<int> windowFreq(26, 0);

        for(int i=0;i<s1.size();i++){
            s1Freq[s1[i]-'a']++;
        }
        int left=0;
        for(int right=0;right<s2.size();right++){
            windowFreq[s2[right]-'a']++;
            if(right-left+1==window){
                if(windowFreq==s1Freq){
                    return true;
                }
                windowFreq[s2[left]-'a']--;
                left++;
            }
        }

        return false;
    }
};