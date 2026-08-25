
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
        bool loop=false;
        while(fast!=nullptr && fast->next!=nullptr){
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow){
                loop=true;
                break;
            }
        }

        if(loop){
            slow=head;
            while(slow!=fast){
                slow=slow->next;
                fast=fast->next;
            }

            return slow;
        }

        return nullptr;
    }
};