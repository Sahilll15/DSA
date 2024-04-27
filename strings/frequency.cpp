#include<iostream>
#include <string>
#include <vector>
#include<map>
using namespace std;

const int maxChar=26;

void frequency(string &s){
    
    int countChar[maxChar]={0};

    for(int i=0;i<s.length();i++){
        countChar[s[i]-'a']++;
    }


    
    for(int i=0;i<maxChar;i++){
        if(countChar[i]>0)
            {   cout<<(char)(i+'a');
            cout<<countChar[i];

            }
         
        
       
    }
    
}


//using a map

void frequencyusingmap(string &s){
    map<char,int>mp;
    // Map over string.
    for(auto it:s) mp[it]++;
    // Printing the char with their frequency.
    cout << "All characters in the string with their frequencies:" << endl; 
    for(auto it:mp) cout << it.first << it.second << " "; // Separate character and frequency
    cout << endl;
}


int main(){
    string s="aabccccdddd";
    frequency(s);

    frequencyusingmap(s);

    
    return 0;
}