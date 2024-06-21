/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    int ans = INT_MAX; 

    void helper(TreeNode* root, int &prev) {
        if(not root) return; 

        helper(root->left, prev);

        if(prev != -1) {
            ans = min(ans, abs(root->val - prev));
        } 
        prev = root->val;

        helper(root->right, prev);

    }

    int getMinimumDifference(TreeNode* root) {
        int prev = -1;
        helper(root, prev);
        return ans;
    }
};