
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        vector<vector<int>> ans;
        if(root==nullptr) return ans;
        queue<TreeNode*> q;

        q.push(root);
        bool reversed=false;
        while(!q.empty()){
            int size=q.size();

            vector<int> level;
            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                q.pop();

                level.push_back(node->val);
                if(node->left!=nullptr) q.push(node->left);
                if(node->right!=nullptr) q.push(node->right);
            }
                if(reversed){
                    reverse(level.begin(),level.end());
                    reversed=false;
                }else{
                    reversed=true;
                }

            ans.push_back(level);
                
        }
        return ans;
    }
};