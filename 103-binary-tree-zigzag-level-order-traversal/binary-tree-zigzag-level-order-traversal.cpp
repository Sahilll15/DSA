class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (root == nullptr) return ans;  // Handle edge case where root is null

        queue<TreeNode*> q;
        q.push(root);
        bool leftToRight = true;  // Flag to control the order of traversal

        while (!q.empty()) {
            int size = q.size();
            vector<int> level(size);

            for (int i = 0; i < size; ++i) {
                TreeNode* node = q.front();
                q.pop();

                // Find the position to fill the node's value
                int index = leftToRight ? i : (size - 1 - i);
                level[index] = node->val;

                // Add child nodes to the queue
                if (node->left != nullptr) q.push(node->left);
                if (node->right != nullptr) q.push(node->right);
            }

            // Toggle the order for the next level
            leftToRight = !leftToRight;
            ans.push_back(level);
        }

        return ans;
    }
};