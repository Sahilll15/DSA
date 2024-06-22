/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int val) : val(val), left(nullptr), right(nullptr) {}
 *     TreeNode(int val, TreeNode *left, TreeNode *right) : val(val), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return inorderTraversal(root);
    }
    
private:
    TreeNode* prev = nullptr;
    
    bool inorderTraversal(TreeNode* root) {
        if (root == nullptr) {
            return true;
        }
        
        // Traverse the left subtree
        if (!inorderTraversal(root->left)) {
            return false;
        }
        
        // Check if the current node's value is greater than the previous node's value
        if (prev != nullptr && root->val <= prev->val) {
            return false;
        }
        
        // Update the previous node to the current node
        prev = root;
        
        // Traverse the right subtree
        return inorderTraversal(root->right);
    }
};
