#include<iostream>
using namespace std;

void removeChar(string &s,char c){

    for(int i=0;i<s.length();i++){
        if(s[i]==c){
            s.erase(s.begin()+i);
            i--;
        }
    }
}

int main(){
    string s="geeksforgeeks";
    char c='e';


    removeChar(s,c);
    cout<<s<<endl;
    return 0;

}