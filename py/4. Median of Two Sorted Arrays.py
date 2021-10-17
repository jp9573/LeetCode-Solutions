from typing import List


class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        combination = nums1 + nums2
        combination.sort()
        
        length = len(combination)
        
        if length % 2 == 1:
            return combination[length // 2]
        else:
            median1 = combination[length // 2 - 1]
            median2 = combination[length // 2]
            return (median1 + median2) / 2