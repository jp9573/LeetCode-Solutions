class Solution(object):
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        if len(s) != len(t):
            return False
        sd = Counter(s)
        td = Counter(t)
        
        for k,v in sd.items():
            if td.get(k, -1) != v:
                return False
        return True
