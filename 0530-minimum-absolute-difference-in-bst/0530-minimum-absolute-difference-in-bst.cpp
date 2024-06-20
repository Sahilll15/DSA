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
    vector<int>values;
    void traversal(TreeNode* root)
    {
        if(root==nullptr){
            return;
        }

        values.push_back(root->val);
        traversal(root->left);
        traversal(root->right);
    }   
 int getMinimumDifference(TreeNode* root) {
        traversal(root);
        int min=INT_MAX;

        for(int i=0;i<values.size();i++){
            for(int j=i+1;j<values.size();j++){
                int diff=abs(values[i]-values[j]);
                if(diff<min){
                    min=diff;
                }
            }
        }

        return min;
    }
};