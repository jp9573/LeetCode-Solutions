class Solution(object):
    def isValid(self, s):
        l=list(str(s))
        n=len(l)
    
        d={')':'(','}':'{',']':'['}
        l1=[]
        for i in l:
            if len(l1)==0 and i in ')]}':
                return False
            if i in '({[':
                l1.append(i)
            if len(l1)!=0 and i in ')]}':
                if d[i]==l1[-1]:
                    l1.pop()
                else:
                    return False
        if len(l1)==0:
            return True
        else:
            return False
            
        
            
                
            
       
