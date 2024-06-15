class Solution {
public:
    vector<string> ans;
    
    void getPaths(TreeNode* root, string path) {
        if (root == nullptr) {
            return;
        }
        
        path += to_string(root->val);
        
        if (root->left == nullptr && root->right == nullptr) {
            ans.push_back(path);
        } else {
            path += "->";
            getPaths(root->left, path);
            getPaths(root->right, path);
        }
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        if (root == nullptr) {
            return ans;
        }
        getPaths(root, "");
        return ans;
    }
};