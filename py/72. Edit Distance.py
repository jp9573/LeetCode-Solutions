def find(word1,word2,m,n):
    dp=[[0 for x in range (n+1)] for x in range (m+1)]
    for i in range (m+1):
        for j in range(n+1):
            if i==0:
                dp[i][j]=j
            elif j==0:
                dp[i][j]=i
            elif word1[i-1]==word2[j-1]:
                dp[i][j]=dp[i-1][j-1]
            else:
                dp[i][j]=1+min(dp[i][j-1],dp[i-1][j],dp[i-1][j-1])
    return dp[m][n]
                
    

class Solution(object):
    def minDistance(self, word1, word2):
        m=len(word1)
        n=len(word2)
        if m==0:
            return n
        if n==0:
            return m
        return find(word1,word2,m,n)
