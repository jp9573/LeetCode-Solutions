class Solution {
    public boolean isValidSudoku(char[][] board) {
        
        for(int i=0;i<9;i++)
        {
            int t[]=new int[9];
            int k[]= new int[9];
            for(int j=0;j<9;j++)
            {
                if(board[i][j]!='.')
                {
                    if(t[board[i][j]-'1']>0)
                        return false;
                    else t[board[i][j]-'1']++;
                }
                if(board[j][i]!= '.')
                {
                    if(k[board[j][i]-'1']>0)
                        return false;
                    else k[board[j][i]-'1']++;
                }
            }  
        }   
        for(int m=0,n=0;m<9;n+=3)
        {
            int b[]=new int[10];
            for(int i=m;i<(m+3);i++)
            {
                
                for(int j=n;j<(n+3);j++)
                {
                    if(board[i][j]!='.')
                    {if((b[(board[i][j]-'0')])>0)
                        return false;
                     else b[board[i][j]-'0']++;
                    }
                }
            }
            if(n==6)
            {
                n=-3;
                m+=3;
            } 
        }  
     return true;           
    }
}