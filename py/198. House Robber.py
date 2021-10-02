class Solution:
    def rob(self, nums: List[int]) -> int:
        dp = [0] * (len(nums) + 1) 
        dp[0] = 0 
        dp[1] = nums[0]

        for i in range(2, len(dp)):
            dp[i] = max((nums[i - 1] + dp[i-2]), dp[i - 1])
 
        return max(dp)