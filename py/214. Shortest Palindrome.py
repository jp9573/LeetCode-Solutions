class Solution:
    def shortestPalindrome(self, s: str) -> str:
        lth, i, n = 0, 1, len(s)
        if n == 0:
            return s
        s1, lps = s + '#' + s[::-1], [0] * (2 * n)
        while i < 2 * n:
            if s1[lth] == s1[i]:
                lth += 1
                lps[i] = lth
                i += 1
            elif lth > 0:
                lth = lps[lth - 1]
            else:
                i += 1
        return s[-1:lps[2 * n - 1]:-1] + s
