
class Solution {
public:
    TreeNode* getPosition(TreeNode* root, int val) {
        if (root == nullptr) {
            return nullptr;
        }

        TreeNode* pos = root;

        while (true) {
            if (val < pos->val) {
                if (pos->left == nullptr) {
                    return pos;
                }
                pos = pos->left;
            } else {
                if (pos->right == nullptr) {
                    return pos;
                }
                pos = pos->right;
            }
        }
    }

    TreeNode* insertIntoBST(TreeNode* root, int val) {
      
        TreeNode* newNode = new TreeNode(val);


        if (root == nullptr) {
            return newNode;
        }

        TreeNode* pos = getPosition(root, val);

        if (val < pos->val) {
            pos->left = newNode;
        } else {
            pos->right = newNode;
        }

        return root;
    }
};
