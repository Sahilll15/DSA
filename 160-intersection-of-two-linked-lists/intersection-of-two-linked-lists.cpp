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
        if(headA==nullptr || headB==nullptr) return nullptr;
        ListNode* PA=headA;
        ListNode* PB=headB;

        while(PA !=PB){
            PA=PA? PA->next:headA;
            PB=PB? PB->next: headB;
        }

        return PA;
    }
};