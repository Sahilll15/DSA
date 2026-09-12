class Solution {
public:
    int height(TreeNode* root){
        if(root==nullptr) return 0;
        int left=height(root->left);
        if(left==-1) return -1;
        int right=height(root->right);
        if(right==-1) return -1;
        if(abs(left-right)>1)return -1;         
        return 1+max(left,right);
    }
    bool isBalanced(TreeNode* root) {
        if(root==nullptr) return true;
        
        return height(root)!=-1;
    }
};