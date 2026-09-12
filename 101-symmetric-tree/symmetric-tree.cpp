
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(root==nullptr) return true;
        return checkSymmetry(root->left,root->right);        
    }

    bool checkSymmetry(TreeNode* p,TreeNode* q){
        if(p==nullptr && q==nullptr) return true;

        if(p==nullptr || q==nullptr) return false;

        if(p->val != q->val) return false;

        return checkSymmetry(p->left,q->right) && checkSymmetry(p->right,q->left);
    }
};