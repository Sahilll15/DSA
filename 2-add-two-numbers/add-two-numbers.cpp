class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy;              
        ListNode* ans = &dummy;       

        ListNode* head1 = l1;
        ListNode* head2 = l2;

        int carry = 0;

        while (head1 != nullptr || head2 != nullptr) {
            int firstValue = (head1 != nullptr) ? head1->val : 0;
            int secondValue = (head2 != nullptr) ? head2->val : 0;

            int finalValue = firstValue + secondValue + carry;
            carry = finalValue / 10;

            ans->next = new ListNode(finalValue % 10);
            ans = ans->next; 

            if (head1) head1 = head1->next;
            if (head2) head2 = head2->next;
        }

        if (carry > 0)
            ans->next = new ListNode(carry);

        return dummy.next;
    }
};