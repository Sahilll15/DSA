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
    int solve(TreeNode* root){
        if(root==nullptr){
            return 0;
        }

        if(root->left==nullptr && root->right==nullptr){
            return 1;
        }

        if(!root->left) return solve(root->right)+1;
        if(!root->right)return solve(root->left)+1;

        int leftheight=solve(root->left);
        int rightheight=solve(root->right);

        return min(leftheight,rightheight)+1;
    }
    int minDepth(TreeNode* root) {
        return solve(root);
    }
};