#include<iostream>
using namespace std;

string reverseStringusingLoop(string str){
    string reversedString;
    for(int i=str.length()-1; i>=0; i--){
        reversedString += str[i];
    }
    return reversedString;
}


string reverstringusingSTL(string str){
    reverse(str.begin(), str.end());
    return str;

}
void reverStingusingRecursiion(string s,int i){
  

 int n = s.length();
    if (i == n / 2)
        return;

    swap(s[i], s[n - i - 1]);
    reverStingusingRecursiion(s, i + 1);


}

int main(){
    string str = "sahil chalke";
    cout << reverseStringusingLoop(str);

    cout << endl;
    cout << reverstringusingSTL(str);
    cout << endl;
    reverStingusingRecursiion(str, 0);
    cout << str;

    return 0;
}
