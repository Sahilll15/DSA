#include <iostream>
using namespace std;

const int maxChar = 26; // Changing maxChar to a constant

// void sortString(string &s) {
//     int charCount[maxChar] = {0};

//     for (int i = 0; i < s.length(); i++) {
//         charCount[s[i] - 'a']++;
//     }

//     for (int i = 0; i < maxChar; i++) {
//         for (int j = 0; j < charCount[i]; j++) {
//             cout << (char)(i + 'a');
//         }
//     }
// }

void sortString(string &s){
    int charCount[maxChar]={0};

    for(int i=0;i<s.length();i++){
        charCount[s[i]-'a']++;
    }

    for(int i=0;i<maxChar;i++){
        for(int j=0;j<charCount[i];j++){
            cout<<(char)(i +'a');
        }
    }
}


void sortusingStl(string &s){
    sort(s.begin(),s.end());

}

int main() {
    string s = "geeksforgeeks";
    sortString(s);
    cout<<endl;
    cout<<"using stl";
    cout<<endl;
    sortusingStl(s);
    cout<<s;
    return 0;
}
