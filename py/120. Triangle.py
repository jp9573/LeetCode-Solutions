class Solution(object):
    def minimumTotal(self, triangle):
        row=len(triangle)-1
        col=len(triangle[0])
        while row>0:
            for j in range(row):
                triangle[row-1][j]+=min(triangle[row][j],triangle[row][j+1])
            row=row-1
        return triangle[0][0]
          
