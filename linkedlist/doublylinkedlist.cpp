#include<iostream>
#include<vector>

using namespace std;

class Node{
    
    public:
    int data;
    Node* next;
    Node* prev; 

    Node(int data, Node* next = nullptr, Node* prev = nullptr){
        this->data = data;
        this->next = next;
        this->prev = prev;
    }


    Node(int data){
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }

};

Node* convertToLL(vector<int> &arr){
    Node* head = new Node(arr[0], nullptr, nullptr); // Fix: Specify nullptr for next and prev pointers in the constructor call.

    Node* prev = head;

    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }

    return head;
}

void print(Node* head){
    while(head != nullptr){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main(){
    vector<int> arr = {12, 5, 8, 7};
    Node* head = convertToLL(arr);
    print(head);
    return 0;
}
