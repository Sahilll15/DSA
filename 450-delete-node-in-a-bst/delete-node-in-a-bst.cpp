class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (root == nullptr) return root;
        if (root->val == key) {
            return helper(root);
        }

        TreeNode* curr = root;

      
        while (curr != nullptr) {

            
            if (key < curr->val) {
                if (curr->left != nullptr && curr->left->val == key) {
                    curr->left = helper(curr->left);
                    break;
                }
                curr = curr->left;
            }

           
            else {
                if (curr->right != nullptr && curr->right->val == key) {
                    curr->right = helper(curr->right);
                    break;
                }
                curr = curr->right;
            }
        }

        return root;
    }

    TreeNode* helper(TreeNode* node){
        if (node->left == nullptr) {
            return node->right;
        }
        if (node->right == nullptr) {
            return node->left;
        }

        TreeNode* rightChild = node->right;
        TreeNode* rightMost = findRightNode(node->left);

        rightMost->right = rightChild;
        return node->left;
    }

    TreeNode* findRightNode(TreeNode* root){
        while (root->right != nullptr) {
            root = root->right;
        }
        return root;
    }
};
