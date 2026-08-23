
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        if(head==nullptr || head->next==nullptr){
            return nullptr;
        }        
        ListNode* slow=head;
        ListNode* fast=head;

         while(n>0){
            n--;
            fast=fast->next;
        }


        if (fast == nullptr) {
            ListNode* delNode = head;
            head = head->next;
            delete delNode;
            return head;
        }


       

        while(fast->next!=nullptr){
             fast=fast->next;
             slow=slow->next;   
        }

        ListNode* delNode=slow->next;
        slow->next=slow->next->next;
        delete delNode;
        return head;
    }
};