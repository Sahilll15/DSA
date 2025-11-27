class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return validate(root, LLONG_MIN, LLONG_MAX);
    }

    bool validate(TreeNode* root, long long minVAL, long long maxVAL){
        if(root == nullptr) return true;

        if(root->val <= minVAL || root->val >= maxVAL){
            return false;
        }

        return validate(root->left, minVAL, root->val) &&
               validate(root->right, root->val, maxVAL);
    }
};
