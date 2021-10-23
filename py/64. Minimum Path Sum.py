class Solution(object):
    def minPathSum(self, grid):
        m=len(grid)
        n=len(grid[0])
        arr=[[0 for i in range(n)] for j in range(m)]
        s=0
        for i in range(m):
          
            s=s+grid[i][0]
            arr[i][0]=s
        s1=0
        for j in range(n):
            s1=s1+grid[0][j]
            arr[0][j]=s1
        for i in range(1,m):
            for j in range(1,n):
                arr[i][j]=grid[i][j]+min(arr[i-1][j],arr[i][j-1])
        return arr[-1][-1]
