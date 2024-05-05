class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* result = nullptr;
        ListNode* current = nullptr;
        int carry = 0;

        while (l1 || l2 || carry) {
            int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
            carry = sum / 10;
            int digit = sum % 10;

            if (!result) {
                result = new ListNode(digit);
                current = result;
            } else {
                current->next = new ListNode(digit);
                current = current->next;
            }

            if (l1) l1 = l1->next;
            if (l2) l2 = l2->next;
        }

        return result;
    }
};