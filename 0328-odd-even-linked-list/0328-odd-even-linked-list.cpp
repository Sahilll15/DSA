class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==nullptr || head->next==nullptr){
            return head;
        }
        ListNode* oddNode=head;
        ListNode* originalEven=head->next;
        ListNode* evenNode=originalEven;

        while(oddNode!=nullptr && oddNode->next!=nullptr && evenNode!=nullptr &&  evenNode->next!=nullptr){
            oddNode->next=oddNode->next->next;
            oddNode=oddNode->next;
            evenNode->next=evenNode->next->next;
            evenNode=evenNode->next;
        }

    
        oddNode->next=originalEven;
        return head;
    }
};