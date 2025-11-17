
class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int maxSum=root->val;
        
        dfs(root,maxSum);
        return maxSum;
    }   

    int dfs(TreeNode* root,int& maxSum){
        if(root==nullptr) return 0;

        int leftHeight=max(0,dfs(root->left,maxSum));
        int rightHeight=max(0,dfs(root->right,maxSum));
        maxSum=max(maxSum,root->val+leftHeight+rightHeight);
        return root->val+max(leftHeight,rightHeight);
    }

    
};