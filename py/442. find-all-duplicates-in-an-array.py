class Solution(object):
    def findDuplicates(self, nums):
        set_nums = set()
        answer = []
        for num in nums:
            if num in set_nums:
                answer.append(num)
            else:
                set_nums.add(num)
        return answer
