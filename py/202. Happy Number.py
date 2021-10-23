class Solution:
    def isHappy(self, n: int) -> bool:
        
        hmap = dict()
        
        sm = 0
        while n != 1:
		
            if n in hmap.keys():
                break
            hmap[n] = 1
			
            temp, sm = n, 0
            while temp:
                sm += (temp % 10) ** 2
                temp //= 10
            n = sm
            
        if n == 1:
            return True
        return False
