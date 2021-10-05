class Solution:
    def climbStairs(self, n: int) -> int:
        if n == 1:
            return n
        k = l = 1
        for i in range(2, n+1):
            res = k + l
            l = k
            k = res
        return res