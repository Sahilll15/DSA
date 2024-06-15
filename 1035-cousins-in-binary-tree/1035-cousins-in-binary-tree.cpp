class Solution {
public:
    unordered_map<int, int> mp;
    
    void getDepth(TreeNode* root, int depth) {
        if (root == nullptr) {
            return;
        }

        mp[root->val] = depth;

        getDepth(root->left, depth + 1);
        getDepth(root->right, depth + 1);
    }

    bool isCousins(TreeNode* root, int x, int y) {
        getDepth(root, 0);

        int xDepth = mp.count(x) ? mp[x] : -1;
        int yDepth = mp.count(y) ? mp[y] : -1;

        if (xDepth == -1 || yDepth == -1) {
            return false;
        }

        return xDepth == yDepth && !areSiblings(root, x, y);
    }

    private:
    bool areSiblings(TreeNode* root, int x, int y) {
        if (root == nullptr) {
            return false;
        }

        bool left = (root->left && root->right && 
                     ((root->left->val == x && root->right->val == y) || 
                      (root->left->val == y && root->right->val == x)));

        return left || areSiblings(root->left, x, y) || areSiblings(root->right, x, y);
    }
};
