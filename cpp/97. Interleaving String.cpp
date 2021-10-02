class Solution {
public:
    int dp[201][201][201]; 
    string a, b, c; 
    bool helper(int n1, int n2, int n3)
    {
        if(c[n3-1]==a[n1-1] && c[n3-1]==b[n2-1])
        {
            if(dp[n1-1][n2][n3-1]==-1)
            {
                dp[n1-1][n2][n3-1] = helper(n1-1, n2, n3-1); 
            }
            if(dp[n1][n2-1][n3-1]==-1)
            {
                dp[n1][n2-1][n3-1] = helper(n1, n2-1, n3-1); 
            }
            return dp[n1-1][n2][n3-1] || dp[n1][n2-1][n3-1]; 
        }
        else if(c[n3-1]==b[n2-1])
        {
            if(dp[n1][n2-1][n3-1]==-1)
            {
                dp[n1][n2-1][n3-1] = helper(n1, n2-1, n3-1); 
            }
            return dp[n1][n2-1][n3-1]; 
        }
        else if(c[n3-1]==a[n1-1])
        {
            if(dp[n1-1][n2][n3-1]==-1)
            {
                dp[n1-1][n2][n3-1] = helper(n1-1, n2, n3-1); 
            }
            return dp[n1-1][n2][n3-1]; 
        }
        else 
        {
            return false; 
        }
    }
    bool isInterleave(string A, string B, string C) 
    {
        //Your code here
        a = A; 
        b = B; 
        c = C; 
        
        for(int i=0; i<=100; i++)
        {
            for(int j=0; j<=100; j++)
            {
                for(int k=0; k<=100; k++)
                {
                    dp[i][j][k]=-1; 
                }
            }
        }
        dp[0][0][0]=1;
        
        return helper(a.length(), b.length(), c.length()); 
        
    }
};