class Solution {
public:
    bool isPalindrome(ListNode* head) {
        deque<int> values;

        ListNode* current = head;
        while (current != nullptr) {
            values.push_back(current->val);
            current = current->next;
        }


        while (values.size() > 1) {
            if (values.front() == values.back()) {
                values.pop_front();
                values.pop_back();
            } else {
                return false;
            }
        }

        return true;
    }
};
