

class Solution {
public:
    ListNode* reverse(ListNode *head){
        ListNode* curr=head;
        ListNode* prev=nullptr;
        ListNode* temp=nullptr;
        while(curr!=nullptr){   
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
    
    return prev;
    }
    ListNode *addOne(ListNode *head) {
        
         ListNode* reverseNode = reverse(head);

        int carry = 1;
        ListNode* curr = reverseNode;

        
        while(curr!=nullptr){
            int value=curr->val+carry;

            if(value>=10){
                curr->val=0;
                carry=1;
            }else{
                curr->val=value;
                carry=0;
            }

            curr=curr->next;
        }

        if(carry>0){
            ListNode* newNode=new ListNode(carry);
            ListNode* temp = reverseNode;

            while (temp->next != nullptr) {
                temp = temp->next;
            }

            temp->next = newNode;
        }

        return reverse(reverseNode);
    }
};
