class Solution {
public:
    int romanToInt(string s) {
    map<char,int> mp;
    int ans=0;
    mp['I']=1;
    mp['V']=5;
    mp['X']=10;
    mp['L']=50;
    mp['C']=100;
    mp['D']=500;
    mp['M']=1000;

    for(int i=0;i<s.length();i++){
        //IV -> becomes 6 but is 4 so V - I i.e 5-1 =4
       if(mp[s[i]]<mp[s[i+1]]){
         ans-=mp[s[i]];
       }else{
        ans+=mp[s[i]];
       }
    }

    return ans;
    }
};