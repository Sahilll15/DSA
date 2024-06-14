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
    bool mainFun(TreeNode* root,int value){
        if (root == nullptr) {
            return true;
        }

        if (root->val != value) {
            return false;
        }

        bool leftAns = mainFun(root->left, value);
        bool rightAns = mainFun(root->right, value);

        return leftAns && rightAns;
        
    }   
    bool isUnivalTree(TreeNode* root) {
        int value=root->val;

        bool ans=mainFun(root,value);

        return ans;
    }
};