
class Solution {
public:
    void traversal(TreeNode* root,int k,int& ans,int &cnt){
        if(root==nullptr) return;

        traversal(root->left,k,ans,cnt);
        cnt++;
        if(cnt==k){
            ans=root->val;
            return;
        }
     
        traversal(root->right,k,ans,cnt);
    }
    int kthSmallest(TreeNode* root, int k) {
        int cnt=0;
        int ans;
        traversal(root,k,ans,cnt);
        return ans;
    }
};