class Solution:
    def maxArea(self, h: int, w: int, horizontalCuts: List[int], verticalCuts: List[int]) -> int:
         # # print(horizontalCuts,verticalCuts)
        horizontalCuts=sorted(horizontalCuts)
        verticalCuts=sorted(verticalCuts)
        # print(horizontalCuts,verticalCuts)
        horizontalCuts.insert(0,0)
        horizontalCuts.append(h)
        verticalCuts.insert(0,0)
        verticalCuts.append(w)
        # print(horizontalCuts,verticalCuts)
        maxh,maxw=0,0
        for i in range(1,len(horizontalCuts)):
            maxh=max(maxh,horizontalCuts[i]-horizontalCuts[i-1])
        for j in range(1,len(verticalCuts)):
            maxw=max(maxw,verticalCuts[j]-verticalCuts[j-1])
        # print(maxh,maxw)
        return maxh*maxw