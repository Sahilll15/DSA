#include <iostream>
using namespace std;

class MyCircularQueue {
private:
    struct Node {
        int data;
        Node* next;
        Node(int data) {
            this->data = data;
            next = nullptr;
        }
    };

    Node* tail;   
    int size;     
    int capacity; 

public:
    MyCircularQueue(int k) {
        tail = nullptr;
        size = 0;
        capacity = k;
    }

    bool enQueue(int value) {
        if (isFull()) return false;

        Node* newNode = new Node(value);
        if (!tail) {
            tail = newNode;
            tail->next = tail; 
        } else {
            newNode->next = tail->next;
            tail->next = newNode;
            tail = newNode;
        }
        size++;
        return true;
    }

    bool deQueue() {
        if (isEmpty()) return false;

        Node* head = tail->next;
        if (tail == head) {
            delete head;
            tail = nullptr;
        } else {
            tail->next = head->next;
            delete head;
        }
        size--;
        return true;
    }

    int Front() {
        if (isEmpty()) return -1;
        return tail->next->data;
    }

    int Rear() {
        if (isEmpty()) return -1;
        return tail->data;
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return size == capacity;
    }
};


