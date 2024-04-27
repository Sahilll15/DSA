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

void reverseStrTwoPointers(string& str)
{
    int n = str.length();
 
    // Swap character starting from two
    // corners
    // i is the left pointer and j is the right pointer
    for (int i = 0, j = n - 1; i < j; i++, j--)
        swap(str[i], str[j]);
}
 

int main(){
    string str = "sahil chalke";
    cout << reverseStringusingLoop(str);

    cout << endl;
    cout << reverstringusingSTL(str);
    cout << endl;
    reverStingusingRecursiion(str, 0);
    cout << str;

    cout << endl;
    reverseStrTwoPointers(str);
    cout << str;

    return 0;
}
