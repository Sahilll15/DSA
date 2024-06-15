#include <cmath>


class Solution {
public:
    int total = 0;

    int leftPart(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }

        int leftSum = leftPart(root->left);
        int rightSum = leftPart(root->right);
        int nodeTilt = abs(leftSum - rightSum);
        total += nodeTilt;
        
        return root->val + leftSum + rightSum;
    }

    int findTilt(TreeNode* root) {
        leftPart(root);
        return total;
    }
};
