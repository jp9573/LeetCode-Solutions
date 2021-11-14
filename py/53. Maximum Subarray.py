class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        copy=[0]*len(nums)
        copy[0]=nums[0]
        largest=nums[0]
        
        for i in range(1,len(nums)):
            copy[i]=max(copy[i-1]+nums[i],nums[i])
            if copy[i]>largest:
                largest=copy[i]
        return largest