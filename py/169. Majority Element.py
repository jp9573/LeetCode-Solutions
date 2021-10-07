class Solution(object):
    def majorityElement(self, nums):
        c=dict(Counter(nums))
        maxi=max(c.values())
        for key,value in c.items():
            if ( value  == maxi ):
                return key