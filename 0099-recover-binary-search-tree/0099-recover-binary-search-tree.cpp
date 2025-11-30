
class Solution {
    TreeNode* first = nullptr;
    TreeNode* last = nullptr;
    TreeNode* middle = nullptr;
    TreeNode* prev = nullptr;

public:
    void recoverTree(TreeNode* root) {
        first = middle = last = nullptr;
        prev = new TreeNode(INT_MIN);
        inorder(root);
        if(first!=nullptr && last!=nullptr){
            swap(first->val,last->val);
        }else if(first!=nullptr && middle!=nullptr){
            swap(first->val,middle->val);
        }
    }

    void inorder(TreeNode* root) {
        if(root==nullptr) return;
        inorder(root->left);

        if (prev != nullptr && (prev->val > root->val)) {
            if (first == nullptr) {
                first = prev;
                middle = root;
            } else {
                last = root;
            }
        }
        prev = root;
        inorder(root->right);
    }
};