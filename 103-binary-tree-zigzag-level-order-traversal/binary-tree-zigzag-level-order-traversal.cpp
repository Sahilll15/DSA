
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if (!root) return {};
        string direction = "left";
        vector<vector<int>> ans;

        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            TreeNode* node = q.front();
            int size = q.size();
            vector<int> current;
            for (int i = 0; i < size; i++) {
                TreeNode* node = q.front();
                q.pop();

                current.push_back(node->val);

                
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }

            if(direction=="right"){
                reverse(current.begin(),current.end());
            }

            ans.push_back(current);

            direction=(direction=="left") ?"right":"left";
        }

        return ans;
    }
};