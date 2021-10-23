class Solution:
    def canFinish(self, numCourses: int, prerequisites: List[List[int]]) -> bool:
        dic=collections.defaultdict(list)
        graySet,blackSet=set(),set()
        for c,r in prerequisites:
            dic[r]+=[c]
        res=True
        def topo(i):
            nonlocal graySet,blackSet,res
            if i in blackSet:
                return 
            elif i in graySet:
                res=False
            else:
                graySet.add(i)
                for c in dic[i]:
                    topo(c)
                blackSet.add(i)
        for i in range(numCourses):
            topo(i)
        return res
