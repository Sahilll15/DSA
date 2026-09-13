class Solution {
public:
    map<int,vector<pair<int,int>>> myMap;
    void traversal(TreeNode* root,int verticalLevel,int level){
        if(root==nullptr) return;
        myMap[verticalLevel].push_back({level,root->val});

        if(root->left!=nullptr)traversal(root->left,verticalLevel-1,level+1);
        if(root->right!=nullptr)traversal(root->right,verticalLevel+1,level+1);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==nullptr) return ans;
        traversal(root,0,0);

        for(auto it:myMap){
            sort(it.second.begin(),it.second.end());
            vector<int> newAns;
            for(int i=0;i<it.second.size();i++){
                newAns.push_back(it.second[i].second);
            }
            ans.push_back(newAns);
        }   

        return ans;
    }
};