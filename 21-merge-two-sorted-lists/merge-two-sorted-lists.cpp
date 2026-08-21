
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode();
        ListNode* newNode = dummy;

        while(list1!=nullptr && list2!=nullptr){
            if(list1->val<list2->val){
               newNode->next=list1;
               list1=list1->next;
               newNode=newNode->next;
            }else{
                newNode->next=list2;
                list2=list2->next;
                newNode=newNode->next;
            }
        }

        while(list1!=nullptr){
            newNode->next=list1;
            list1=list1->next;
            newNode=newNode->next;
        }
        while(list2!=nullptr){
            newNode->next=list2;
            list2=list2->next;
            newNode=newNode->next;
        }

        return dummy->next;

    }
};