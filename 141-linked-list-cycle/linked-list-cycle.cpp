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
    bool hasCycle(ListNode *head) {
        if(head == NULL || head->next == NULL){
            return false;
        }

        map<ListNode*,int> mp;
        ListNode* temp=head;

        while(temp!=NULL){

            if(mp.find(temp)!=mp.end()){
                return true;
            }

            mp[temp]=1;
            temp=temp->next;
        }

        return false;
    }
};