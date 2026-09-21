
class Solution {
public:
    unordered_map<int,int>map;
    void traversal(TreeNode* root){
        if(root==nullptr)return ;

        map[root->val]++;
        traversal(root->left);
        traversal(root->right);
    }
    bool findTarget(TreeNode* root, int k) {
        if(root==nullptr)return false;
        if(!root->left && !root->right && root->val!=k)return false;

        traversal(root);
        
        for(auto it:map){
            int target=k-it.first;
            if(map.find(target)!=map.end() && it.first!=target){
                return true;
            }
        }
       
        return false;
    }
};