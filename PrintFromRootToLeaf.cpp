
class Solution{
	public:
		vector<vector<int>> allRootToLeaf(TreeNode* root) {
            vector<vector<int>> ans;
            if(root==nullptr) return {};

            vector<int>current;
            printAll(root,ans,current);
            return ans;
		}

        void printAll(TreeNode* root,vector<vector<int>>&ans,vector<int>&current){
            if(root==nullptr) return;
            
            current.push_back(root->data);

            if(root->left ==nullptr && root->right==nullptr){
                ans.push_back(current);
            }else{
                printAll(root->left,ans,current);
                printAll(root->right,ans,current);
            }

             current.pop_back();
        }
};
