
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* ans;
       if(root==nullptr){
        return nullptr;
       }

       if(root->val ==val){
        return root;
       }

       if(val < root->val){
        ans=searchBST(root->left,val);
       }else{
        ans=searchBST(root->right,val);
       }

       return ans;
    }
};