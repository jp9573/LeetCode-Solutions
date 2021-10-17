class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        if (len(s) == 0):
            return 0
        longest=s[0]
        for i in range(len(s)-1):
            ch=s[i]
            j=i+1
            while (j <= len(s)-1):
                if (s[j] not in list(ch)):
                    ch=ch+s[j]
                    j+=1
                else:
                    break
            if len(ch) > len(longest):
                longest=ch
        return len(longest)
