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
    int maxLevel = 0;
    int sum = 0;

    void traversal(TreeNode* root, int level) {
        if (root == nullptr) return;
        
       
        if (root->left == nullptr && root->right == nullptr) {
            if (level > maxLevel) {
                maxLevel = level;
                sum = root->val; 
            } else if (level == maxLevel) {
                sum += root->val;  
            }
        }

        traversal(root->left, level + 1);
        traversal(root->right, level + 1);
    }

    int deepestLeavesSum(TreeNode* root) {
        traversal(root, 0);
        return sum;
    }
};
