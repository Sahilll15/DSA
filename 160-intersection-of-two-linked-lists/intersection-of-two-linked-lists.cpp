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
        unordered_set<ListNode* > stt;
        ListNode *curr=headA;
        while(curr!=NULL){
            stt.insert(curr);
            curr=curr->next;
        }
        ListNode *temp=headB;
        while(temp!=NULL){
            if(stt.find(temp)!=stt.end()){
                return temp;
            }
            temp=temp->next;
        }
        return NULL;
    }
};