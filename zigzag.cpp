class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	vector<int>result;
    	
    	if(root==NULL)return result;
    	
    	queue<Node*>q;
    	q.push(root);
    	
    	bool leftToRight=true;
    	while(!q.empty())
    	{
    	    int size=q.size();
    	    vector<int>ans;
    	    
    	    for(int i=0;i<size;i++)
    	    {
    	        node* frontNode=q.front();
    	        q.pop();
    	        
    	        
    	        int index=leftToRight ? i : size - i- 1;
    	        ans[index]=frontNode->data;
    	        
    	        if(frontNode->left)
    	        {
    	            q.push(frontNode->left);
    	       
    	        }
    	        if(frontNode->right)
    	        {
    	            q.push(frontNode->right);
    	        }
    	    }
    	    leftToRight=!leftToRight;
    	    
    	    
    	    for(auto i : ans)
    	    {
    	        result.push_back(i);
    	    }
    	}
    	
    	
    	return result;
    }
};
