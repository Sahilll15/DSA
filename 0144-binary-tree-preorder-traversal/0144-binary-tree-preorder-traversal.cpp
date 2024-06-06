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
   void preorder(TreeNode*&root,vector<int>&pre){
        if(root){
            pre.push_back(root->val);
            preorder(root->left,pre);
            preorder(root->right,pre);
        }
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>pre;
        preorder(root,pre);
        return pre;
    }
   

};