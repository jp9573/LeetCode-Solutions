class Solution(object):
    def countAndSay(self, n):
        """
        :type n: int
        :rtype: str
        """

        def makeStr(n):
            res = ''
            i = 0
            j = 1
            while i < len(n) and j < len(n):
                if n[i] == n[j]:
                    j += 1
                else:
                    res += str(j - i) + n[i]
                    i = j
                    j += 1
            res += str(j - i) + n[-1]
            return res

        def getCountAndSay(m):
            if m <= 1:
                return "1"
            return makeStr(getCountAndSay(m - 1))

        res = getCountAndSay(n)
        return res
