class Solution {
public:
    vector<int> values;
    
    void Traversal(TreeNode* root) {
        if (root == nullptr) {
            return;
        }

        values.push_back(root->val);
        Traversal(root->left);
        Traversal(root->right);
    }
    
    bool findTarget(TreeNode* root, int k) {
        Traversal(root);
        
        int n = values.size();
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (values[i] + values[j] == k) {
                    return true;
                }
            }
        }

        return false;
    }
};