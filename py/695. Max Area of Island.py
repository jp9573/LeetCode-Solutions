def dfs(grid,i,j):
    count=0
    if(i<0 or j<0 or i>=len(grid) or j>= len(grid[0]) or grid[i][j]==0):
        return 0
    else:
        grid[i][j]=0
        count=1
        count+=dfs(grid,i+1,j)
        count+=dfs(grid,i-1,j)
        count+=dfs(grid,i,j+1)
        count+=dfs(grid,i,j-1)
    
    
    return count
    
class Solution(object):
    def maxAreaOfIsland(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        maxi=0
        for i in range(len(grid)):
            for j in range(len(grid[0])):
                if(grid[i][j]==1):
                    maxi=max(dfs(grid,i,j),maxi)
        return maxi