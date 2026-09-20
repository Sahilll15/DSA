
class Solution {
public:
     pair<TreeNode*, TreeNode*>  searchNode(TreeNode* root,int key){
            TreeNode* curr = root;
        TreeNode* parent = nullptr;

        while (curr) {
            if (curr->val == key) {
                return {curr, parent};
            }

            parent = curr;

            if (curr->val > key) {
                curr = curr->left;
            } else {
                curr = curr->right;
            }
        }

        return {nullptr, nullptr};
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
          if (root == nullptr) return nullptr;

        auto [node, parent] = searchNode(root, key);

        
        if (node == nullptr) {
            return root;
        }
        if (node->left == nullptr && node->right == nullptr) {
            if (parent == nullptr) {
                delete node;
                return nullptr;
            }

            if (parent->left == node) {
                parent->left = nullptr;
            } else {
                parent->right = nullptr;
            }

            delete node;
            return root;
        }
        

        if(node->left && node->right){
            TreeNode* successorParent = node;
            TreeNode* successor = node->right;

            while(successor->left){
                successorParent=successor;
                successor=successor->left;
            }

            node->val=successor->val;
             if (successorParent->left == successor) {
                successorParent->left = successor->right;
            } else {
                successorParent->right = successor->right;
            }

            delete successor;

            return root;

        }

        TreeNode* child;

        if (node->left) {
            child = node->left;
        } else {
            child = node->right;
        }

        // Node is root
        if (parent == nullptr) {
            delete node;
            return child;
        }

        // Connect parent directly to child
        if (parent->left == node) {
            parent->left = child;
        } else {
            parent->right = child;
        }

        delete node;

        return root;


    }
};