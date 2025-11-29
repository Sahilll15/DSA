
class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        unordered_map<int,int> mp;

        traversal(root,mp);

        for(auto it: mp){
            if(mp.count(k-it.first) && (it.first != k-it.first)){
                return true;
            }
        }

        return false;
    }

    void traversal(TreeNode* root, unordered_map<int,int> &mp){
        if(root==nullptr) return;
        
        mp[root->val]=1;

        traversal(root->left,mp);
        traversal(root->right,mp);
    }
};