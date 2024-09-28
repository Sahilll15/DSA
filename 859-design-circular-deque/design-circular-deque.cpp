struct DoublyListNode{
    int val;
    DoublyListNode* next;
    DoublyListNode* prev;
    DoublyListNode(int data){
        this->val = data;
        this->prev = NULL;
        this->next = NULL;
    }
};
class MyCircularDeque {
private:
    int currLength;
    int maxLength;
    DoublyListNode* head;
    DoublyListNode* tail;
public:
    MyCircularDeque(int k) {
        currLength = 0;
        maxLength = k;
    }
    
    bool insertFront(int value) {
        if(currLength == maxLength)
            return false;
        
        DoublyListNode* newNode = new DoublyListNode(value);
        if(currLength == 0){
            head = newNode;
            tail = newNode;
        }
        else{
            head->prev = newNode;
            newNode->next = head;
            head = newNode;
        }
        currLength++;
        return true;
    }
    
    bool insertLast(int value) {
        if(currLength == maxLength)
            return false;
        
        DoublyListNode* newNode = new DoublyListNode(value);
        if(currLength == 0){
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        currLength++;
        return true;
    }
    
    bool deleteFront() {
        if(currLength == 0)
            return false;
        
        currLength--;
        DoublyListNode* temp = head;
        head = head->next;
        if(head) head->prev = NULL;
        delete temp;
        return true;
    }
    
    bool deleteLast() {
        if(currLength == 0)
            return false;
        
        currLength--;
        DoublyListNode* temp = tail;
        tail = tail->prev;
        if(tail) tail->next = NULL;
        delete temp;
        return true;
    }
    
    int getFront() {
        if(currLength == 0)
            return -1;
        return head->val;
    }
    
    int getRear() {
        if(currLength == 0)
            return -1;
        return tail->val;
    }
    
    bool isEmpty() {
        return (currLength == 0);
    }
    
    bool isFull() {
        return (currLength == maxLength);
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */