class Solution(object):
    def rotate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        def rev(arr, s, e):
            while s < e:
                arr[s], arr[e] = arr[e], arr[s]
                s += 1
                e -= 1
            
        n = len(nums)
        k %= n
        rev(nums, 0, n-1)
        rev(nums, 0, k-1)
        rev(nums, k, n-1)
        
