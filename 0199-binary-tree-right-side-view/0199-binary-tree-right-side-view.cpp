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
    vector<int> rightSideView(TreeNode* root) {
        
        queue<pair<TreeNode* , int>> q;
        map<int, int> m;
        
        vector<int> result;

        if(root == nullptr) return result;
        
        q.push({root, 0});
        
        
        while(!q.empty()){
            
            auto t = q.front();
            q.pop();
            
            TreeNode* node = t.first;
            int level = t.second;
            if(m.find(level) == m.end()){
                m[level] = node->val;
            }

            if(node->right) q.push({node->right, level + 1});
            if(node->left) q.push({node->left, level + 1});
            
            
        }
        
        
        for(auto r : m){
            result.push_back(r.second);
        }
        
        return result;
    }
};