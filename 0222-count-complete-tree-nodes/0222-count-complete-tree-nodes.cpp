
class Solution {
public:
    int countNodes(TreeNode* root) {
        if(root==nullptr) return 0;
        int count=1;
        traversal(root->left,count);
        traversal(root->right,count);
        return count;
    }

    void  traversal(TreeNode* root,int& count){
        if(root==nullptr) return;

         count++; 
        if(root->left) traversal(root->left,count);
        if(root->right) traversal(root->right,count);
    }
};