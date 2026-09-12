class Solution {
public:
    int checkHeight(TreeNode* root){
        if(root==nullptr) return 0;
        return 1+max(checkHeight(root->left),checkHeight(root->right));
    }
    bool height(TreeNode* root){
        if(root==nullptr) return true;
        int left=checkHeight(root->left);
        int right=checkHeight(root->right);
        if(abs(left-right)<=1){
            return height(root->left) && height(root->right);           
        }
        return false;
    }
    bool isBalanced(TreeNode* root) {
        if(root==nullptr) return true;
        
        return height(root);
    }
};