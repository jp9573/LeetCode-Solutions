/*
A robot is located at the top-left corner of a m x n grid (marked 'Start' in the diagram below).

The robot can only move either down or right at any point in time. The robot is trying to reach the bottom-right corner of the grid (marked 'Finish' in the diagram below).

How many possible unique paths are there?

*/
class Solution {
public:
    int uniquePaths(int m, int n) {
  
     vector<vector<int>>v(m,vector<int>(n,1)); 
     int r=findmin(0,0,m,n,v);   
     return r;
     
      
    }
    
    int findmin(int i,int j,int m,int n,vector<vector<int>>&dp){
        
        
      
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
        
               dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
        }
        
        return dp[m-1][n-1];
        
        
    }
};

/*

Input: m = 3, n = 7
Output: 28

*/
