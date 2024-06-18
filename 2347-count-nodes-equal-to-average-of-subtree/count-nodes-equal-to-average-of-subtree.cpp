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
    pair<int,int> avgCount(TreeNode* root,int &count){
        if(root==nullptr){
            return {0,0};
        }

        pair<int,int> lh=avgCount(root->left,count);
        pair<int,int> rh=avgCount(root->right,count);

        int sum=lh.first+rh.first+root->val;
        int ele=lh.second+rh.second+1;

        if(sum/ele == root->val) count++;
        return {
            sum,ele
        };
    }
    int averageOfSubtree(TreeNode* root) {
        int count=0;
        pair<int,int>cnt=avgCount(root,count);
        return count;
    }
};