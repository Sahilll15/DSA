
class Solution {
public:
    bool isBalanced(TreeNode* root) {
    return getHeight(root) != -1;
    }   

    int getHeight(TreeNode* root){
        if(root==nullptr) return 0;
        int left=getHeight(root->left);
        int right=getHeight(root->right);
        
         if(left== -1 || right == -1){
            return -1;
        }
        if(abs(left-right)>1){
            return -1;
        }

        return max(left,right)+1;
    }
};