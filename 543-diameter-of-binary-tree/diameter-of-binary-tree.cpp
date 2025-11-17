
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int maxVal=0;

        if(root==nullptr) return 0;
        getHeight(root,maxVal);
        return maxVal;
    }

    int getHeight(TreeNode* root,int& maxVal){
        if(root==nullptr) return 0;

        int leftHeight = getHeight(root->left, maxVal);
        int rightHeight = getHeight(root->right, maxVal);

        maxVal=max(maxVal,leftHeight+rightHeight);

        return max(leftHeight,rightHeight)+1;
    }

};