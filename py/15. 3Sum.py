class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        a=nums
        a.sort()
        i=0
       
        l=[]
        ss=set()
        while i<len(nums)-2:
            j=i+1
            k=len(nums)-1
            temp=0-a[i]
            while j<k:
                if a[j]+a[k]==temp:
                    if (a[i],a[j],a[k]) not in ss:
                        l.append([a[i],a[j],a[k]])
                        ss.add((a[i],a[j],a[k]))
                    k=k-1
                    j=j+1
                elif  a[j]+a[k]>temp:
                    
                    k=k-1
                else:
                    
                    j=j+1
            i=i+1
        return l
                    
                
