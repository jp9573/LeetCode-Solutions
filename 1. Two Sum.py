class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        rem = 0
        for ind, n in enumerate(nums):
            rem = target - n
            if rem in nums and nums.index(rem) != ind:
                return [ind, nums.index(rem)]
