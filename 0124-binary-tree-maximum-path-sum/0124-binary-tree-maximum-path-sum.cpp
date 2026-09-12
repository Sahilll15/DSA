
class Solution {
public:
    int getHeight(TreeNode* root,int& maxPathSum){
        if(root==nullptr) return 0;
        int leftHeight=getHeight(root->left,maxPathSum);
        int rightHeight=getHeight(root->right,maxPathSum);
        int currentPathSum=root->val +(leftHeight>0 ? leftHeight : 0)+(rightHeight>0 ? rightHeight : 0);

        maxPathSum=max(maxPathSum,currentPathSum);        
        return root->val+max(0,max(leftHeight,rightHeight));
    }

    int maxPathSum(TreeNode* root) {
        int maxPathSum=INT_MIN;
        getHeight(root,maxPathSum);
        return maxPathSum;
    }
};