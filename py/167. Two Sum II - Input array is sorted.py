class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:

        left, right = 0, len(numbers) - 1

        while left < right:
            total = numbers[right] + numbers[left]

            if total > target:
                right -= 1

            if total < target:
                left += 1

            if total == target:
                return left+1, right+1
