
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==nullptr) return 0;
        int left=0;
        int right=0;

        left=maxDepth(root->left);
        right=maxDepth(root->right);
        

        return 1+max(left,right);
    }
};