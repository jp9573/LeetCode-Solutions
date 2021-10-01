class Solution(object):
    def intersect(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        r = []
        m = Counter(nums1)
        
        for n in nums2:
            if n in m and m[n] > 0:
                r.append(n)
                m[n] -= 1
        
        return r
