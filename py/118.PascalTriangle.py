'''

Question
Given an integer numRows, return the first numRows of Pascal's triangle.

Input: numRows = 5
Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
'''

class Solution:
    
    def generate(self, numRows: int) -> List[List[int]]:
        ll = [[]]
        tmp = []
        
        for i in range(numRows):
            tmp = []
            for j in range(i+1):
                res = math.factorial(i)/(math.factorial(j) * math.factorial(i-j))
                tmp.append(int(res))
            ll.append(tmp)
        ll.pop(0)
        return ll
