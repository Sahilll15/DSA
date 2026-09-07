
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode* curr = head;
        vector<int> nums;

        while (curr != nullptr) {
            nums.push_back(curr->val);
            curr = curr->next;
        }
        int n = nums.size();
        vector<int> ans(n);
        stack<int> st;

        for (int i = 0; i <= nums.size() - 1; i++) {
            if (st.empty()) {
                st.push(i);
                continue;
            }

            while (!st.empty() && nums[i] > nums[st.top()]) {
                ans[st.top()] = nums[i];
                st.pop();
            }
            st.push(i);
        }

        return ans;
    }
};