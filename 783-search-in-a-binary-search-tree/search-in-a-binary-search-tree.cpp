
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if (root == nullptr)
            return nullptr;
        if (root->val == val)
            return root;

        TreeNode* ans = nullptr;
        if (root->val < val) {
            ans = searchBST(root->right, val);
        } else {
            ans = searchBST(root->left, val);
        }

        return ans;
    }
};