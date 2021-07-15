class Solution(object):
    def customSortString(self, order, str):
        """
        :type order: str
        :type str: str
        :rtype: str
        """
        m = Counter(str)
        r = ''
        for ch in order:
            if ch in m:
                m[ch] -= 1
                r += ch
                if m[ch] > 0:
                    while m[ch] > 0:
                        r += ch
                        m[ch] -= 1
                        
        for ch, f in m.items():
            if f > 0:
                while f > 0:
                    r += ch
                    f -= 1
                
        return r
