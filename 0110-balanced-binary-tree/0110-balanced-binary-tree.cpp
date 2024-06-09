#include <algorithm> // for std::max
#include <cmath>     // for std::abs

class Solution {
public:
    int getHeight(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        
        int lh = getHeight(root->left);
        int rh = getHeight(root->right);
        
        if (lh == -1 || rh == -1 || std::abs(lh - rh) > 1) {
            return -1;
        }

        return 1 + std::max(lh, rh);
    }

    bool isBalanced(TreeNode* root) {
        return getHeight(root) != -1;
    }
};
