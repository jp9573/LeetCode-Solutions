class Solution(object):
    # def sortedSquares(self, A):
    #     """
    #     :type A: List[int]
    #     :rtype: List[int]
    #     """
    #     # Directly sort
    #     return sorted(x * x for x in A) 

    def sortedSquares(self, A):
        positive = 0
        while positive < len(A) and A[positive] < 0:
            positive += 1
        # positive point to first positve
        # npos point to larget negative
        npos = positive  - 1
        res = []
        while positive < len(A) and npos >= 0:
            if A[npos] ** 2 < A[positive] ** 2:
                res.append(A[npos] ** 2)
                npos -= 1
            else:
                res.append(A[positive] ** 2)
                positive +=1 
        while npos >= 0:
            res.append(A[npos] ** 2)
            npos -= 1
        while positive < len(A):
            res.append(A[positive] ** 2)
            positive += 1
        return res