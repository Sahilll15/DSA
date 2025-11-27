
class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        vector<int> inorder;
        traversal(root,inorder);
        return inorder[k-1];
    }

    void traversal(TreeNode* root,vector<int>& inorder){
        if(root==nullptr){
            return;
        }
        traversal(root->left,inorder);
        inorder.push_back(root->val);
        traversal(root->right,inorder);
    }
};