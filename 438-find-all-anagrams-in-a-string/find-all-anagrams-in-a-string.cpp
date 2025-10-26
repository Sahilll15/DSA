class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> Pchar(26,0);
        vector<int> Schar(26,0);
        vector<int> ans;
        for (char ch : p) {
          Pchar[ch - 'a']++;
        }

         int windowSize = p.size();
        int i=0;
        for (int j=0;j<s.size();j++){
            Schar[s[j]-'a']++;

            if (j - i + 1 > windowSize) {
                Schar[s[i] - 'a']--;
                i++;
            }


            if(Pchar==Schar){
                ans.push_back(i);
            }

        }

        return ans;
    }
};