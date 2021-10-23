class Solution(object):
    def lengthOfLIS(self, nums):
        n=len(nums)
        if n==0:
            
            return 0
        l=[1]*n
        for i in range(1,n):
            for j in range(0,i):
                if nums[i]>nums[j] and l[i]<l[j]+1:
                    l[i]=l[j]+1
       
        return max(l)
