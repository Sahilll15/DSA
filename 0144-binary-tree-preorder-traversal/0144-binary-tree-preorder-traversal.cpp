
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
        vector<int> ans;
        preorder(root,ans);
        return ans;
    }
};