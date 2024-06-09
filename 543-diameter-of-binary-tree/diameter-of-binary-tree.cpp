/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr, right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int diameter = 0;

    int maxDepth(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        int lh = maxDepth(root->left);
        int rh = maxDepth(root->right);
        diameter = std::max(diameter, lh + rh);
        return 1 + std::max(lh, rh);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        maxDepth(root); 
        return diameter;
    }
};
