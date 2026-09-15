
class Solution {
public:
    map<int,vector<unsigned long unsigned long>> mp;
    
    void traversal(TreeNode* root,int level,unsigned long unsigned long verticalLevel){
        if(root==nullptr) return;

        mp[level].push_back(verticalLevel);
        if(root->left)traversal(root->left,level+1,verticalLevel*2);
        if(root->right)traversal(root->right,level+1,verticalLevel*2+1);

    }
    int widthOfBinaryTree(TreeNode* root) {
        if(root==nullptr) return 0;
         mp.clear();
        int maxWidth=0;
        traversal(root,1,1);

        for(auto it:mp){
            unsigned long unsigned long minimum=*min_element(it.second.begin(),it.second.end());
            unsigned long unsigned long maximum=*max_element(it.second.begin(),it.second.end());
            maxWidth = max(maxWidth,(int)(maximum - minimum+1) );
        }

        return maxWidth;
    }
};