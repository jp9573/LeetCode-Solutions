int reverse(long long x) 
    {int flag=0;
        
       if ( x>=0 ) {
            flag=1;
          
        }
        if (x<0 ) {
            flag=0;
            x=(-1)*x;
            
        }
        
        long long d,s=0;
        if(x >=0 && x <= 9)
        {
            return x;
        }
        while(x != 0)
        {
            d = x%10;
            s = s*10 + d;
            x = x/10;
        }
        if ( flag==1 &&  s > 2147483647) {
            
            return 0;
        }
        if (flag==0 && s > 2147483648) {
            
            
            return 0;
        }
        if(flag==0)
        return s*(-1);
     else
         return s;
    }