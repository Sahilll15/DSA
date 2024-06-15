class Solution {
public:
    unordered_map<int, int> mp;
    vector<int> ans;

    vector<int> findMode(TreeNode* root) {
        if (root == nullptr) {
            return {}; // Corrected the return statement
        }

        traverse(root);

        int maxFreq = 0;
        for (auto &i : mp) {
            if (i.second > maxFreq) {
                maxFreq = i.second;
            }
        }

        for (auto &i : mp) {
            if (i.second == maxFreq) {
                ans.push_back(i.first);
            }
        }

        return ans;
    }

    void traverse(TreeNode* root) {
        if (root == nullptr) {
            return;
        }
        mp[root->val]++;
        traverse(root->left);
        traverse(root->right);
    }
};