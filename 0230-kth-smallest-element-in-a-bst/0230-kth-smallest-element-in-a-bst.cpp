
class Solution {
public:
    void traversal(TreeNode* root,int k,vector<int>& elements){
        if(root==nullptr) return;

        elements.push_back(root->val);
        traversal(root->left,k,elements);
        traversal(root->right,k,elements);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int>elements;

        traversal(root,k,elements);

        sort(elements.begin(),elements.end());
        return elements[k-1];
    }
};