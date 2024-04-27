#include<iostream>
#include<vector>
using namespace std;


string addStars(string str,vector<int> chars){
    string ans="";


    for(int i=0;i<str.length();i++){

       for(int j=0;j<chars.size();j++){
        if(chars[j]== i){
            ans+="*";
        }
       
       }
        ans+=str[i];
    }

    return ans;
}


int main()
{
    string str = "geeksforgeeks";
    vector<int> chars = { 1, 5, 7, 9 };
    string ans = addStars(str, chars);
 
    // Printing the resultant string
    cout << ans << endl;
}