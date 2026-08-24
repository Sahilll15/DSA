class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode* prev=nullptr;
        ListNode* temp=head;
        ListNode* curr=head;

        while(curr!=nullptr){
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }

        return prev;
    }
    bool isPalindrome(ListNode* head) {

        ListNode* fast=head;
        ListNode* slow=head;
        ListNode* middle=nullptr;
        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }

        middle=slow;
        if(fast!=nullptr){
            slow=slow->next;
        }

        ListNode* reverseNode=reverse(slow);
        
        while(head!=middle && reverseNode!=nullptr){
            if(head->val !=reverseNode->val){
                return false;
            }

            head=head->next;
            reverseNode=reverseNode->next;
        }
        

        return true;
    }
};