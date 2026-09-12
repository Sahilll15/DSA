
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==nullptr) return 0;
        int maxLeft=0;
        int maxRight=0;

        maxLeft=maxDepth(root->left);
        maxRight=maxDepth(root->right);
        

        return 1+max(maxLeft,maxRight);
    }
};