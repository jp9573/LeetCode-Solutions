class Solution {
public:
    double myPow(double x, int n) {
        
        double ans =1;
        long nx=n;
        
        if(nx==0)
            return ans;
        if(x==1)
            return x;
        
      
        if(n<0){
            x=1/x;
            nx=-nx;
        }
        
        if(nx&1)
            return x*myPow(x*x, (nx/1)/2);
        else
            return myPow(x*x, nx/2);
        
       
    }
};
