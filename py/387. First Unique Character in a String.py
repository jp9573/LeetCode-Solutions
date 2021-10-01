class Solution(object):
    def firstUniqChar(self, s):
        """
        :type s: str
        :rtype: int
        """
        d = Counter(s)
        d = {k:v for k,v in d.items() if v == 1}
        res = float("inf")
        for k,v in d.items():
            if s.index(k) < res:
                res = s.index(k)
        return -1 if res == float("inf") else res
