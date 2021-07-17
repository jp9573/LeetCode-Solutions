class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        res = 0
        i = 0
        is_negative = True if x < 0 else False
        x = abs(x)
        while x > 0:
            rem = x % 10
            res = res * 10 + rem
            x = x // 10
            i += 1

        res = -res if is_negative else res
        if -2 ** 31 >= res or res >= 2 ** 31 - 1:
            return 0
        return res
