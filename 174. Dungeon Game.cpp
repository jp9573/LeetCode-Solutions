// Problem Link : https://leetcode.com/problems/dungeon-game/

class Solution {
public:
        int t[205][205];
  
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
       int m=dungeon.size();
       int n=dungeon[0].size();
       
        for(int i=m-1;i>=0;i--)
        {
                for(int j=n-1;j>=0;j--)
                {
                        if(i==m-1&&j==n-1)
                        {
                                t[i][j]=min(0,dungeon[i][j]);
                        }
                       else if(i==m-1)
                        {
                                 t[i][j]=min(0,dungeon[i][j]+t[i][j+1]);
                        }
                        else if(j==n-1)
                        {
                               t[i][j]=min(0,dungeon[i][j]+t[i+1][j]); 
                        }
                        else
                        {
                                t[i][j]=min(0,dungeon[i][j]+max(t[i+1][j],t[i][                                    j+1]));
                        }
                        
                }
        }
          return abs(t[0][0])+1;  
    }
};