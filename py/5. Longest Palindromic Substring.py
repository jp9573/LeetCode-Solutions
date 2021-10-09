
class Solution(object):
    def longestPalindrome(self, s):
        n=len(s)
        tmp=[[0 for i in range(n)]for j in range(n)]
        i=0
        maxlen=1
        while i<n:
            tmp[i][i]=1
            i=i+1
        i=0
        start=0
        while i<n-1:
            if s[i]==s[i+1]:
                tmp[i][i+1]=1
                start=i
                maxlen=2
            i=i+1
        k=3
        while k<=n:
            i=0
            while i<(n-k+1):
                j=i+k-1
                if tmp[i+1][j-1]==1 and s[i]==s[j]:
                    tmp[i][j]=1
                    if k>maxlen:
                        start=i
                        maxlen=k
                i=i+1
            k=k+1
        
        return(s[start:start+maxlen])
                
            
            
        
        
