class Solution(object):
    def minimumAbsDifference(self, arr):
        """
        :type arr: List[int]
        :rtype: List[List[int]]
        """
        if not arr:
            return []
        
        arr.sort()
        mindiff = arr[1] - arr[0]
        for index in range(2, len(arr)):
            mindiff = min(mindiff, (arr[index] - arr[index-1]))
        
        result = []
        for index in range(1, len(arr)):
            if arr[index] - arr[index-1] == mindiff:
                result.append([arr[index-1], arr[index]])
        return result