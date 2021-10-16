class Solution(object):
    def romanToInt(self, s):
        
        d={'I':1,'V':5,'X':10,'L':50,'C':100,'D':500,'M':1000}
        l=list(str(s))
        k=len(l)
        i=0
        
        s=0
        if k==1:
            return d[l[0]]
        while i<k-1:
            j=i+1
          
            if d[l[i]]>d[l[j]]:
                s=s+d[l[i]]
                if i+2==k:
                    s=s+d[l[j]]
                i=i+1
            elif d[l[i]]<d[l[j]]:
                s=s+d[l[j]]-d[l[i]]
                i=i+2
                if i+1==k:
                    s=s+d[l[i]]
          
            else:
              
                if i+2==k:
                    s=s+2*(d[l[i]])
                    i=i+1
                else:
                    s=s+d[l[i]]
                    i=i+1
          
            
            
        return s
            
            
                
            
       
        
