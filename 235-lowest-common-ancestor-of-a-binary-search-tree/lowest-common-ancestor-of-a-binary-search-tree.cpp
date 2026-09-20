
class Solution {
public:

    bool LCA(TreeNode* root,vector<TreeNode*> &path,TreeNode* node){
        if(root==nullptr)return false;

        path.push_back(root);
        if(root->val == node->val)return true;
        if(LCA(root->left,path,node)){
            return true;
        }
        if(LCA(root->right,path,node)) return true;

        path.pop_back();

        return false;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> pathP;
        vector<TreeNode*> pathQ;

        TreeNode* ans;
        LCA(root, pathP, p);
        LCA(root, pathQ, q);

        int i=0;
        while(i<pathP.size() && i<pathQ.size()){
            if(pathP[i]->val==pathQ[i]->val){
                ans=pathP[i];
                i++;
            }else{
                break;
            }
        } 

        return ans;
    }
};