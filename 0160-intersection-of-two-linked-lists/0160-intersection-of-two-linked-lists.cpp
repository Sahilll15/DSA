/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        if(headA==nullptr || headB==nullptr ) return nullptr;
        ListNode* P1=headA;
        ListNode* P2=headB;

        while(P1 !=P2){
            P1=(P1) ? P1->next: headA;
            P2=(P2) ? P2->next: headB;
        }

        return P1;


    }
};