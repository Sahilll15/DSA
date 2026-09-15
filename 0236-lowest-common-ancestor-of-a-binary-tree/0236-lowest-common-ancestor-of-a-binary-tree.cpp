
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==nullptr) return root;

        vector<TreeNode*> pathP;
        vector<TreeNode*>pathQ;

        vector<TreeNode*> current;
        LCA(root,pathP,pathQ,current,p,q);
        int n=min(pathQ.size(),pathP.size());
        int i=0;
        TreeNode* ans;
        while(i<n && pathQ[i]==pathP[i]){
            ans=pathQ[i];
            i++;
        }
        return ans;
    }

    void LCA(TreeNode* root,vector<TreeNode*>&pathP, vector<TreeNode*>&pathQ, vector<TreeNode*>& current,TreeNode* p,TreeNode* q){
        if(root==nullptr) return;

        current.push_back(root);

        
        if(root == p) {
            pathP = current;
        }

        if(root == q) {
            pathQ = current;
        }

        if(root->left) LCA(root->left,pathP,pathQ,current,p,q);
        if(root->right) LCA(root->right,pathP,pathQ,current,p,q);
        current.pop_back();
    }
};