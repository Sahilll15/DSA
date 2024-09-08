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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int length = 0;
        ListNode* current = head;
        while (current) {
            length += 1;
            current = current->next;
        }

        int partSize = length / k;
        int largerParts = length % k;

        vector<ListNode*> result(k);

        current = head;
        for (int i = 0; i < k; i++) {
            int sublistSize = (i < largerParts) ? (partSize + 1) : partSize;
            if (sublistSize == 0) {
                result[i] = nullptr;
            } else {
                ListNode* sublistHead = current;
                for (int j = 0; j < sublistSize - 1; j++) {
                    current = current->next;
                }
                ListNode* nextNode = current->next;
                current->next = nullptr;
                result[i] = sublistHead;
                current = nextNode;
            }
        }

        return result;        
    }
};