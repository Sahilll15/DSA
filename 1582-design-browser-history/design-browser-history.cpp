#include <string>
using namespace std;

class BrowserHistory {
    struct Node {
        string url;
        Node* next;
        Node* prev;

        Node(string url_val) {
            url = url_val;
            next = nullptr;
            prev = nullptr;
        }
    };

    Node* currentPage;

public:
    BrowserHistory(string homepage) {
        currentPage = new Node(homepage);
    }
    
    void visit(string url) {
        Node* newNode = new Node(url);
        // clear forward history
        currentPage->next = nullptr;
        newNode->prev = currentPage;
        currentPage->next = newNode;
        currentPage = newNode;
    }
    
    string back(int steps) {
        while (steps > 0 && currentPage->prev != nullptr) {
            currentPage = currentPage->prev;
            steps--;
        }
        return currentPage->url;
    }
    
    string forward(int steps) {
        while (steps > 0 && currentPage->next != nullptr) {
            currentPage = currentPage->next;
            steps--;
        }
        return currentPage->url;
    }
};
