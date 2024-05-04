/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* sortList(ListNode* head) {
      

        vector<int> ans;
        ListNode* temp=head;
        while(temp){
            ans.push_back(temp->val);
            temp=temp->next;
        }

        sort(ans.begin(),ans.end());

        int i=0;
        temp=head;
        while(temp){
            temp->val=ans[i];
            temp=temp->next;
            i++;
        }
return head;


    }
};