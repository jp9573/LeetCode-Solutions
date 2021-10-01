class Solution(object):
    def findPeakElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        i = 1
        n = len(nums)
        if n == 1:
            return 0
        while i < n:
            pr = nums[i-1]
            cr = nums[i]            
            nx = nums[i+1] if i + 1 < n else float('-inf')
            
            if pr < cr and cr > nx:
                return i

            i += 1
        return 0
        
