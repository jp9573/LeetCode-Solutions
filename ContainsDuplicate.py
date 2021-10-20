class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
            if len(set(nums)) == len(nums):
                return False

            dict = {}

            for i, value in enumerate(nums):
                if value in dict and abs(i - dict[value]) <= k:
                    return True
                dict[value] = i

            return False
