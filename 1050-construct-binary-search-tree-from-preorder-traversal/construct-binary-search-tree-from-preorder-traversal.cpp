
class Solution {
public:
    void findPos(TreeNode* root,int val){
        if(root==nullptr)return;

        if(root->val>val){
            if(root->left==nullptr){
                root->left=new TreeNode(val);
                return;
            }else{
                findPos(root->left,val);
            }
        }else{
            if(root->right==nullptr){
                root->right=new TreeNode(val);
                return;
            }else{
                findPos(root->right,val);
            }
        }
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        if(preorder.size()==0) return nullptr;

        TreeNode* root=new TreeNode(preorder[0]);

        int i=1;
        while(i<preorder.size()){
            findPos(root,preorder[i]);
            i++;
        }

        return root;
    }
};