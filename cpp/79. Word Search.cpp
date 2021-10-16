class Solution {
public:
    bool search(vector<vector<char>> &board,string word,int in,int i,int j){
        if(in == word.length())
            return true;
        
        int n = board.size();
        int m = board[0].size();
        
        if(i>=n || j>=m || i<0 || j<0 || board[i][j]=='#')
            return false;
        
        if(board[i][j] == word[in]){
            char temp =board[i][j];
            board[i][j]='#';
            bool res = search(board,word,in+1,i+1,j) || search(board,word,in+1,i,j+1) || search(board,word,in+1,i-1,j) || search(board,word,in+1,i,j-1);
           
            board[i][j]=temp;
            
            return res;
        } 
        
        return false;
        
    }
    bool exist(vector<vector<char>>& board, string word) {
        
         int n = board.size();
        int m = board[0].size();
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==word[0]){
                    if(search(board,word,0,i,j)){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};
