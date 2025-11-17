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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return checkSame(p,q);
    }

    bool checkSame(TreeNode* p,TreeNode* q){
        if(p==nullptr && q==nullptr) return true;

        if(p==nullptr || q==nullptr) return false;

        if(p->val!=q->val) return false;

        bool leftSame=checkSame(p->left,q->left);
        bool rightSame=checkSame(p->right,q->right);

        return leftSame && rightSame;
    }
};