//language: JAVA
//263. Ugly number

class Solution {
    public boolean isUgly(int n) {
        if(n<1)
            return false;
        while(n%2==0)
            n/=2;
        
       for(int i=3;i<=n;i+=2) 
           {
           if(i==3||i==5)
          while(n%i==0)
              n=n/i;

                  else break; 
               
               
           }
        if(n==1)
            return true;
        else 
            return false;
       }
}