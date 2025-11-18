
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(root==nullptr) return false;


        return isSame(root->left,root->right) == 1  ;
    }

    int isSame(TreeNode* root1,TreeNode* root2){
        if(root1==nullptr && root2==nullptr) return 1;
        
        if(root1==nullptr || root2==nullptr) return -1;

        if(root1->val != root2->val){
            return -1;
        }
        int val1=isSame(root1->left,root2->right);
        int val2=isSame(root1->right,root2->left); 

        if(val1 == -1 || val2==-1){
            return -1;
        }

        return 1;
    }
};