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
    TreeNode* ans;
    TreeNode* current;

    TreeNode* increasingBST(TreeNode* root) {
        ans = new TreeNode(0);  
        current = ans;         
        
        inorderTraversal(root); 
        
        return ans->right;      
    }

    void inorderTraversal(TreeNode* node) {
        if (node == nullptr) {
            return;
        }
        
 
        inorderTraversal(node->left);
        current->right = new TreeNode(node->val); 
        current = current->right;                 
        inorderTraversal(node->right);
    }
};
