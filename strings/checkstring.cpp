#include<iostream>
#include<map>

using namespace std;

bool canMakeAllSame(string str)
{
    int zeros = 0, ones = 0;
 
    
    
    for (char ch : str)
        (ch == '0') ? ++zeros : ++ones;
 
    
    
    return (zeros == 1 || ones == 1);
}
 

int main(){
canMakeAllSame("1010") ? printf("Yes\n") : printf("No\n");
return 0;
}
