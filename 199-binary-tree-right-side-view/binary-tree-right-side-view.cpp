
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        if(root==nullptr) return {};
        vector<int> ans;
        map<int,vector<int>> nodes;
        traversal(root,0,nodes);
        for(auto &level:nodes){
            int n=level.second.size();
            ans.push_back(level.second[n-1]);
        }
    
        return ans;
    }

    void traversal(TreeNode* root,int level,map<int,vector<int>>& nodes){
        if(root==nullptr) return;

        nodes[level].push_back(root->val);
        if(root->left)traversal(root->left,level+1,nodes);
        if(root->right)traversal(root->right,level+1,nodes);
        
    }
};