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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head1 = l1;
        ListNode* head2 = l2;
        int carry = 0;

        ListNode dummy;
        ListNode* ans = &dummy;

        while (head1 != nullptr || head2 != nullptr || carry != 0) {
            int firstNum = 0;
            int secondNum = 0;

            if (head1 != nullptr) {
                firstNum = head1->val;
                head1 = head1->next;
            }
            if (head2 != nullptr) {
                secondNum = head2->val;
                head2 = head2->next;
            }

            int val = firstNum + secondNum + carry;
            carry = val / 10;
            val = val % 10;

            ans->next = new ListNode(val);
            ans = ans->next;
        }

        return dummy.next;
    }
};
