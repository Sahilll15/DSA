
class Solution {
public:
    bool dfs(ListNode* head,TreeNode* node){
        if(head==nullptr) return true;
        if(node==nullptr) return false;

        if(head->val !=node->val) return false;

        return dfs(head->next,node->left) || dfs(head->next,node->right);
    }
    bool isSubPath(ListNode* head, TreeNode* root) {
        if(root == nullptr) return false;

        if(root->val == head->val){
            if(dfs(head,root)){
                return true;
            }
        }

        return isSubPath(head,root->left) || isSubPath(head,root->right); 
    }
};