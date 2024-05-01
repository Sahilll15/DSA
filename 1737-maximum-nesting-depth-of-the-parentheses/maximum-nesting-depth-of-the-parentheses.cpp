class Solution {
public:
    int maxDepth(string s) {
    int res=0;
    int curr=0;

    for(int i=0;i<s.length();i++){
        if(s[i] == '('){
            curr+=1;
        }else if (s[i]== ')'){
            curr-=1;
        }

        res=max(curr,res);
    }

    return  res;


    }
};