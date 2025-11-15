
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
     vector<int> ans;
    if (!root) return ans;
    TreeNode* node=root;
    stack<TreeNode*> st;

    while (true) {
        if(node!=nullptr){
            st.push(node);
            node=node->left;
        }else{
            if(st.empty()==true) break;
            node=st.top();
            st.pop();
            ans.push_back(node->val);
            node=node->right;
        }
    }

    return ans;
    }
};