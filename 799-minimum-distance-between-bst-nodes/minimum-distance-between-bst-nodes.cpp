/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int minDiffInBST(TreeNode* root) {
        int minDiff = INT_MAX;
        TreeNode* prev = nullptr;
        inorderTraversal(root, prev, minDiff);
        return minDiff;
    }
    
private:
    void inorderTraversal(TreeNode* node, TreeNode*& prev, int& minDiff) {
        if (node == nullptr) {
            return;
        }
        
        inorderTraversal(node->left, prev, minDiff);
        
        if (prev != nullptr) {
            minDiff = std::min(minDiff, node->val - prev->val);
        }
        prev = node;
        
        inorderTraversal(node->right, prev, minDiff);
    }
};
