class Solution {
public:
    bool solve(int i,int j,int index,vector<vector<char>>& board, string word){
        if(index==word.size()){
            return true;
        }


        if (i < 0 || j < 0 || i >= board.size() || j >= board[0].size())
            return false;

        if (board[i][j] != word[index])
            return false;

        
        char org=board[i][j];
        board[i][j]='#';
        bool left=solve(i-1,j,index+1,board,word);
        bool right=solve(i+1,j,index+1,board,word);
        bool top=solve(i,j-1,index+1,board,word);
        bool bottom=solve(i,j+1,index+1,board,word);
        board[i][j]=org;

        return left||right||top||bottom;
    }
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[i].size();j++){
                if(board[i][j]==word[0]){
                    if(solve(i,j,0,board,word)) return true;
                }
            }
        }
        return false;
    }
};