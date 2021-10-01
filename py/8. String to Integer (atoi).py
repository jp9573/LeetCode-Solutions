class Solution(object):
    def myAtoi(self, s):
        """
        :type s: str
        :rtype: int
        """
        s = s.lstrip()
        if len(s) == 0:
            return 0
        is_negative = s[0] == '-'
        if is_negative:
            s=s[1:]
        elif s[0] == "+":
            s = s[1:]
        res = ''
        for ch in s:
            if ch.isnumeric():
                if ch == '0' and len(res) == 0:
                    continue
                else:
                    res += ch
            elif len(res) == 0:
                res = '0'
                break
            else:
                break
        
        if len(res) == 0:
            return 0
        res = int(res)
        if is_negative:
            res = -res
        
        if res < -2**31:
            res = -2**31
        elif res > 2**31 - 1:
            res = 2**31 - 1
        return res
