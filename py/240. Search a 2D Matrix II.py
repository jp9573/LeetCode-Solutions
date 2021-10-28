class Solution(object):
    def searchMatrix(self, matrix, target):
        """
        :type matrix: List[List[int]]
        :type target: int
        :rtype: bool
        """
        m=len(matrix)
        n=len(matrix[0])
        
        def findBinary(si,sj,li,lj,target):
            #print si, sj, li, lj
            if 0<=si<m and 0<=li<m and 0<=sj<n and 0<=lj<n:
                pass
            else:
                return False
            if matrix[si][sj]==target or matrix[li][lj]==target:
                return True
            if si==li and sj==lj:
                return False
            if si>li or sj>lj:
                return False
            if target<matrix[si][sj]:
                return False
            midi=(si+li)//2
            midj=(sj+lj)//2
            if matrix[midi][midj]==target or matrix[si][sj]==target or matrix[li][lj]==target or matrix[si][lj]==target or matrix[li][sj]==target:
                return True
            elif matrix[midi][midj]>target:
                return findBinary(si,sj,midi-1,midj-1,target) or findBinary(si,midj,midi-1,lj,target) or findBinary(midi,sj,li,midj-1,target)  
            else:
                return findBinary(midi+1,midj+1,li,lj,target) or findBinary(si,midj+1,midi,lj,target) or findBinary(midi+1,sj,li,midj,target)  
            
        return findBinary(0,0,m-1,n-1,target)
            
        
