string sort(string s){
   
   vector<int> alpha(26,0);
   
   for(int i=0;i<s.size();i++){
       int index=s[i]-'a';
       alpha[index]++;
   }
   
   string ans;
   for(int i=0;i<26;i++){
       char a='a'+i;
       
       while(alpha[i]){
           ans+=a;
           alpha[i]--;
       }

   }
   return ans;
}
