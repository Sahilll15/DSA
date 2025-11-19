
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if (!root) return 0;

        long long maxWidth = 0;
        queue<pair<TreeNode*, long long>> q;

        q.push({root,1});

        while(!q.empty()){
            int size = q.size();
            long long start=q.front().second;
            long long end=start;

            for(int i=0;i<size;i++){
                 auto [node, idx] = q.front();
                 q.pop();

                 idx -= start;

                 end = idx;

                 if(node->left){
                    q.push({node->left,2*idx});
                 }
                  if(node->right){
                    q.push({node->right,2*idx+1});
                 }
            }

            maxWidth=max(maxWidth,end+1);
        }

        return maxWidth;
    }
};