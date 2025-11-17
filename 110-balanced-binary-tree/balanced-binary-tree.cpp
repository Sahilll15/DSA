
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(root==nullptr) return true;
        int leftHeight=getHeight(root->left);
        int rightHeight=getHeight(root->right);
        if(leftHeight== -1 || rightHeight == -1){
            return false;
        }
        return abs(leftHeight-rightHeight)<=1;
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