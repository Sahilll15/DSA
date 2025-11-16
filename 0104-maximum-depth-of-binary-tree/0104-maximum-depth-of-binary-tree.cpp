
class Solution {
public:
    int maxDepth(TreeNode* root) {
        int maxVal=0;
        int ans=0;

         getDepth(root,ans+1,maxVal);

         return maxVal;
    }

    void  getDepth(TreeNode* root, int ans, int& maxVal){
        if(root==nullptr) return ;

        if(ans>maxVal){
            maxVal=ans;
        }

        if(root->left) getDepth(root->left,ans+1,maxVal);
        if(root->right) getDepth(root->right,ans+1,maxVal);
    }
};