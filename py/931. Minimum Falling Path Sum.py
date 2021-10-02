class Solution:
    def minFallingPathSum(self, matrix: List[List[int]]) -> int:
        n = len(matrix)
        d= [[float('inf') for _ in range(n)] for _ in range(n)]
        
        for i in range(n):
            d[0][i] = matrix[0][i]
        
        for i in range(1, n):
            for j in range(n):
                if j == 0:
                    d[i][j] =  matrix[i][j] +  min(d[i-1][j], d[i-1][j+1])
                elif j == n-1:
                    d[i][j] =  matrix[i][j] +  min(d[i-1][j-1], d[i-1][j])
                else:
                    d[i][j] =  matrix[i][j] +  min(d[i-1][j-1],  d[i-1][j], d[i-1][j+1])

        return min(d[n-1])