class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* ans = nullptr;

  
        if ((root->val >= min(p->val, q->val)) &&
            (root->val <= max(p->val, q->val))) {
            return root;
        }

        if (root->val > p->val && root->val > q->val) {
            find(root->left, p, q, ans);
        } else if (root->val < p->val && root->val < q->val) {
            find(root->right, p, q, ans);
        }

        return ans;
    }

    void find(TreeNode* root, TreeNode* p, TreeNode* q, TreeNode*& ans) {
        if (!root) return;

        if ((root->val >= min(p->val, q->val)) &&
            (root->val <= max(p->val, q->val))) {
            ans = root;
            return;
        }

        if (root->val > p->val && root->val > q->val) {
            find(root->left, p, q, ans);
        } else if (root->val < p->val && root->val < q->val) {
            find(root->right, p, q, ans);
        }
    }
};
