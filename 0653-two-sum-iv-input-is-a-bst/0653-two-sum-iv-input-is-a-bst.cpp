
class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        unordered_set<int> st;

        return traversal(root, st,k);
    }

    bool traversal(TreeNode* root, unordered_set<int> &st, int k) {
        if (root == nullptr)
            return false;

        if(st.count(k-root->val)){
            return true;
        }

        st.insert(root->val);

        return traversal(root->left, st,k) ||traversal(root->right, st,k);
    }
};