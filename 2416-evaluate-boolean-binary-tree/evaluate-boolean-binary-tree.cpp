class Solution {
public:
    bool evaluateTree(TreeNode* root) {
  
        if (!root) return false;
        
        
        if (!root->left && !root->right)
            return root->val;

        
        bool left = evaluateTree(root->left);
        bool right = evaluateTree(root->right);

    
        if (root->val == 2) return left || right;  
        else if (root->val == 3) return left && right; 
        
        return false;  
    }
};
