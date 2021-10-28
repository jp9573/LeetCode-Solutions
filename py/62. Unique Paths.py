class Solution:
    def __init__(self):
        self.mem={}
    def uniquePaths(self, m: int, n: int) -> int:
        key=(m,n)
        if m==0 or n==0: return 0
        if m==1 and n==1: return 1
        if key in self.mem: return self.mem[key]
        self.mem[key]=self.uniquePaths(m-1,n)+self.uniquePaths(m,n-1)
        return self.mem[key]
