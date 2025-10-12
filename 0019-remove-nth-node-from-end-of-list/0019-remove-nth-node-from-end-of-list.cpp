/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        ListNode* current = head;

        if (current == nullptr)
            return head;

        while (current != nullptr) {
            count++;
            current = current->next;
        }

        count = count - n;
        current = head;

        if (count == 0) {
            head = head->next;
            return head;
        }

        while (count > 1) {
            current = current->next;
            count--;
        }

        current->next = current->next->next;

        return head;
    }
};