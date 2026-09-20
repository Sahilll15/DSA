
class Solution {
public:
    bool validate(TreeNode* curr,long long low,long long high){
         if (curr == nullptr)
            return true;
        
        if(curr->val <=low || curr->val >=high){
            return false;
        }

        return validate(curr->left,low,curr->val) && validate(curr->right,curr->val,high);
    }
    bool isValidBST(TreeNode* root) {
        if(root==nullptr)return true;
        return validate(root, LLONG_MIN, LLONG_MAX);
    }
};