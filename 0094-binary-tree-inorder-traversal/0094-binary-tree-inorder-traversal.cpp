
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        if(root==NULL) return {};
        vector<int> inorder;

        TreeNode* curr=root;

        while(curr!=nullptr){
            if(curr->left==NULL){
                inorder.push_back(curr->val);
                curr=curr->right;
            }else{
                TreeNode* prev=curr->left;

                while(prev->right && prev->right!=curr){
                    prev=prev->right;
                }

                if(prev->right==nullptr){
                    prev->right=curr;
                    curr=curr->left;
                }else{
                    prev->right=nullptr;
                    inorder.push_back(curr->val);
                    curr=curr->right;
                }
            }
        }

        return inorder;
    }
};