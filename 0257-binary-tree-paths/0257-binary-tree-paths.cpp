
class Solution {
public:
    void generatePath(TreeNode* root,vector<string>&allPaths,string path){
        if(root==nullptr)return;

        path+=to_string(root->val);
        if(root->left==nullptr && root->right==nullptr){
            allPaths.push_back(path);
            return;
        }
        path+="->";
       
        if(root->left) generatePath(root->left,allPaths,path);
        if(root->right)generatePath(root->right,allPaths,path);

    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> allPaths;

        string path="";
        generatePath(root,allPaths,path);

        return allPaths;
    }
};