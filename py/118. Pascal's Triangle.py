class Solution:
    def factorial(self,n):
        if n==0 or n==1:
            return 1
        return n*self.factorial(n-1)
    def generate(self, numRows: int) -> List[List[int]]:
        lis = []
        for i in range(numRows):
            lisinlis = []
            for j in range(i+1):
                lisinlis.append( self.factorial(i) // (self.factorial(i-j) * self.factorial(j) ))
            lis.append(lisinlis)
        return lis
