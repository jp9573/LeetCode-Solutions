class Solution(object):
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        ns = ''
        for ch in s:
            if ch.isalnum():
                ns += ch.lower()
        return ns == ns[::-1]
