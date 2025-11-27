
class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        priority_queue<int, vector<int>, greater<int>> pq;
        int ans;
        if(root==nullptr){
            return 0;
        }
        pq.push(root->val);

        traversal(root->left,pq);
        if(pq.size()<k){
            traversal(root->right, pq);
        }


        while(k>0){
            ans=pq.top();
            pq.pop();
            k--;
        }
        return ans;
    }

    void traversal(TreeNode* root,priority_queue<int, vector<int>, greater<int>>& pq){
        if(root==nullptr){
            return;
        }

        pq.push(root->val);
        traversal(root->left,pq);
        traversal(root->right,pq);
    }
};