# """
# This is MountainArray's API interface.
# You should not implement it, or speculate about its implementation
# """
#class MountainArray:
#    def get(self, index: int) -> int:
#    def length(self) -> int:

class Solution:
    def findInMountainArray(self, target: int, mountain_arr: 'MountainArray') -> int:
        end = self.peak_index(mountain_arr)
        
        inLeft = self.binary_search(mountain_arr, target, 0, end)

        if inLeft != -1:
            return inLeft
        
        else:
            return self.binary_search(mountain_arr, target, end+1, mountain_arr.length()-1)
    
    def peak_index(self, arr):
        start, end = 0, arr.length()-1

        while start < end:
            mid = (start+end)//2

            if arr.get(mid) > arr.get(mid+1):
                end = mid
            else:
                start = mid + 1

        return start
    
    def binary_search(self, arr, target, low, high):
        asc = True if arr.get(low) <= arr.get(high) else False

        while low <= high:
            mid = (low+high)//2

            if arr.get(mid) == target:
                return mid

            if asc:
                if target < arr.get(mid):
                    high = mid-1
                else:
                    low = mid + 1
            else:
                if target > arr.get(mid):
                    high = mid-1
                else:
                    low = mid + 1

        return -1
