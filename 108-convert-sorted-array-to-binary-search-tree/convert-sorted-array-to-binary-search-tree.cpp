
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if (nums.empty()) {
            return nullptr;
        }
        return buildBST(nums, 0, nums.size() - 1);
    }

private:
    TreeNode* buildBST(const vector<int>& nums, int left, int right) {
        if (left > right) {
            return nullptr;
        }

        int center = left + (right - left) / 2;
        TreeNode* node = new TreeNode(nums[center]);

        node->left = buildBST(nums, left, center - 1);

        node->right = buildBST(nums, center + 1, right);

        return node;
    }
};
