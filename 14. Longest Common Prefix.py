class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        res = ''
        for i in range(len(strs[0])):
            ch = strs[0][i]
            for r in range(1, len(strs)):
                if len(strs[r]) <= i or ch != strs[r][i]:
                    return res
            else:
                res += strs[0][i]
        return res
        
