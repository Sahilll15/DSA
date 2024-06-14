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
    int count;
    int countNodes(TreeNode* root) {
        if(root==nullptr){
            return 0;
        }
        else{
            count++;
        }

        if(root->left) countNodes(root->left);
         if(root->right) countNodes(root->right);

         return count;
    }
};