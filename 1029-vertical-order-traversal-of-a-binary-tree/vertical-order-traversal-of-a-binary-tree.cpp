class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        map<int, vector<pair<int,int>>> mp;

        queue<TreeNode*> q;
        traversal(root, 0, 0,mp);

       for (auto &p : mp) {
         sort(p.second.begin(), p.second.end());
            
            vector<int> col;
            for (auto &node : p.second)
                col.push_back(node.second); 
            
            ans.push_back(col);
     }


        return ans;
    }

    void traversal(TreeNode* node, int level, int column,
                    map<int,vector<pair<int,int>>>& map) {
        if (node == nullptr)
            return;

        map[column].push_back({level,node->val});
        if (node->left)
            traversal(node->left, level + 1, column - 1, map);
        if (node->right)
            traversal(node->right, level + 1, column + 1, map);
    }
};