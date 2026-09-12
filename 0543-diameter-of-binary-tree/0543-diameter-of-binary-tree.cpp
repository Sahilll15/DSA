
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {  
        int maxValue=0;
        getHeight(root,maxValue);
        return maxValue;        
    }

    int getHeight(TreeNode* root,int& maxValue){
        if(root==nullptr) return 0;
        int leftHeight=getHeight(root->left,maxValue);
        int rightHeight= getHeight(root->right,maxValue);

        maxValue=max(maxValue,leftHeight+rightHeight);
        return 1+max(leftHeight,rightHeight);
    }
};