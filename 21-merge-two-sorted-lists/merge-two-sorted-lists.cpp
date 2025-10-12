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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> nodeValues;

        while(list1!=nullptr){
            nodeValues.push_back(list1->val);
            list1=list1->next;
        }

        while(list2!=nullptr){
            nodeValues.push_back(list2->val);
            list2=list2->next;
        }

        sort(nodeValues.begin(), nodeValues.end());

         if (nodeValues.empty()) return nullptr;

        ListNode* head=new ListNode(nodeValues[0]);
        ListNode* current=head;

        for (int i = 1; i < nodeValues.size(); i++) {
            current->next = new ListNode(nodeValues[i]);
            current = current->next;
        }

        return head;
    }
};