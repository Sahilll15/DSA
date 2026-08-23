
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        if(head==nullptr && head->next==nullptr){
            return nullptr;
        }        

        int cnt=0;
        ListNode* temp=head;
        while(temp!=nullptr){
            temp=temp->next;
            cnt++;
        }

        if(cnt==n){
            ListNode* delNode=head;
            head=head->next;
            delete delNode;
            return head;
        }

        int res=cnt-n;

        temp=head;

        while(res>0){
            res--;
            if(res==0){
                break;
            }
            temp=temp->next;
        }

        ListNode* delNode=temp->next;
        temp->next=temp->next->next;
        delete delNode;
        return head;
    }
};