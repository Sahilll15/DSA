class Solution {
public:
    int sum = 0;
    bool firstNode = true;

    int sumOfLeftLeaves(TreeNode* root) {
        if (root == nullptr) return 0;

        if (root->left != nullptr && root->left->left == nullptr && root->left->right == nullptr) {
            sum += root->left->val;
        }

        sumOfLeftLeaves(root->left);
        sumOfLeftLeaves(root->right);

        return sum;
    }
};