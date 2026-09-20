
class Solution {
public:
    void traversal(TreeNode* root,int k,vector<int>& elements){
        if(root==nullptr) return;

        traversal(root->left,k,elements);
         elements.push_back(root->val);
        traversal(root->right,k,elements);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int>elements;

        traversal(root,k,elements);
        return elements[k-1];
    }
};