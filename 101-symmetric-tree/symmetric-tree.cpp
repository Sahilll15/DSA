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
    void leftTraversal(TreeNode* root, vector<int>& arr) {
        if (root != nullptr) {
            arr.push_back(root->val);
            leftTraversal(root->left, arr);
            leftTraversal(root->right, arr);
        } else {
            arr.push_back(INT_MIN); 
        }
    }

    void rightTraversal(TreeNode* root, vector<int>& arr) {
        if (root != nullptr) {
            arr.push_back(root->val);
            rightTraversal(root->right, arr);  
            rightTraversal(root->left, arr);   
        } else {
            arr.push_back(INT_MIN); 
        }
    }

    bool isSymmetric(TreeNode* root) {
        if (root == nullptr) return true;

        vector<int> leftPart;
        vector<int> rightPart;

        leftTraversal(root->left, leftPart);
        rightTraversal(root->right, rightPart);

        return leftPart == rightPart;
    }
};
