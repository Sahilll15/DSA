#include<bits/stdc++.h>

using namespace std;

class Stack {
    int *arr;
    int top;
    int size;

    public:
        Stack(){
            top=-1; // Initialize top properly
            size=1000;
            arr=new int[size];
        }

     void push(int x){
        top++;
        arr[top]=x;

     }   

     int pop(){
        int x=arr[top];
        top--;
        return x;
     }

     int Top() {
        return arr[top];
    }
    
    int Size() {
        return top + 1;
    }
  
    void printlist(){
        for(int i=0;i<=top;i++){ // Use i <= top to include the last element
            cout<<arr[i]<<" ";
        }
        cout << endl; // Add a new line for better formatting
    }
};

int main() {
    Stack st;
    st.push(1);
    st.push(10);
    
    st.printlist();
    cout<<st.Top()<<endl;
    cout<<st.Size()<<endl;
    
    return 0; // Don't forget to return 0 at the end of main
}  
