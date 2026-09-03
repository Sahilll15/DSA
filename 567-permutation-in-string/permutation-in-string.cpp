class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int window=s1.size();

        sort(s1.begin(),s1.end());
        int left=0;
        string curr;
        for(int right=0;right<s2.size();right++){
            curr+=s2[right];
            if(right-left+1==window){
                string windowString=s2.substr(left,window);
                sort(windowString.begin(),windowString.end());
                if(windowString==s1){
                    return true;
                }
                curr.erase(left,1);
                left++;
            }
        }

        return false;
    }
};