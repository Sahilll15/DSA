class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        
        string rotatedString=s;
        for(int i=0;i<s.size();i++){
            int index=indices[i];

            rotatedString[index]=s[i];
        }
    return rotatedString;

    }
};