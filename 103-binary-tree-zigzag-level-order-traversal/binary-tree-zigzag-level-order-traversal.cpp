
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        vector<vector<int>> ans;
        if(root==nullptr) return ans;
        queue<TreeNode*> q;

        q.push(root);
        bool reversed=true;
        while(!q.empty()){
            int size=q.size();

            vector<int> level(size);
            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                q.pop();
                int index;
                if(reversed){
                     index=i;
                }else{
                    index=size-1-i;
                }
                level[index]=node->val;
                if(node->left!=nullptr) q.push(node->left);
                if(node->right!=nullptr) q.push(node->right);
            }
                

            ans.push_back(level);
            reversed=!reversed;
        }
        return ans;
    }
};