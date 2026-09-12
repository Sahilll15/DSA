
class Solution {
public:
    int countDepth(TreeNode* root){
        if(root==nullptr) return 0;
        int left=0;
        int right=0;

        if(root->left!=nullptr){
            left=countDepth(root->left);
        }

        if(root->right!=nullptr){
            right=countDepth(root->right);
        }

        return 1+max(left,right);
    }
    int maxDepth(TreeNode* root) {
        return countDepth(root);
    }
};