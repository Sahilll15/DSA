
class Solution {
public:
    void reorderList(ListNode* head) {
        if (!head || !head->next) {
            return;
        }
        
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        ListNode* prev = nullptr;
        ListNode* curr = slow;
        ListNode* next = nullptr;
        while (curr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        
        ListNode* first = head;
        ListNode* second = prev;
        while (second->next) {
            ListNode* temp1 = first->next;
            ListNode* temp2 = second->next;
            
            first->next = second;
            second->next = temp1;
            
            first = temp1;
            second = temp2;
        }
    }
};
