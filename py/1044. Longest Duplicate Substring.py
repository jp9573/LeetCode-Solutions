class Solution:
    def longestDupSubstring(self, S: str) -> str:
        l = 1
        h = len(S)
        ans = (0,0)
        while l<=h:
            mid = l+(h-l)//2
            pk = self.check(S,mid)
            if pk:
                ans = pk
                l = mid+1
            else:
                h = mid-1
        return S[ans[0]:ans[0]+ans[1]]
    
    def check(self, A, k):
        p = 10**9+7
        x = [random.randint(1,p-1) for i in range(2)]
        xFactor = [1]*2
        for i in range(k):
            for j in range(2):
                xFactor[j] = (xFactor[j]*x[j])%p
        print(x)
        print(xFactor)

        hashes = {}

        hash = [0,0]

        for i in range(k):
            for j in range(2):
                hash[j] = ((hash[j]*x[j])%p +ord(A[i]))%p

        hashes[tuple(hash)] = 0

        for i in range(k,len(A)):
            for j in range(2):
                hash[j]=((hash[j]*x[j])%p-(ord(A[i-k])*xFactor[j])%p+ord(A[i]))%p
            
            temp = tuple(hash)
            if temp in hashes:
                return (hashes[temp],k)
            hashes[tuple(hash)] = i-k+1

        return None

    
        