class Solution {
    public int trap(int[] height) {
        int res=0, n=height.length, i;
        if(n!=0){
        int lmax[]=new int[n];
        lmax[0]=height[0];
        int rmax[]=new int[n];
        rmax[n-1]=height[n-1];
        
        for(i=1;i<n;i++)
        {
            lmax[i]=Math.max(lmax[i-1], height[i]);
        }
        for(i=n-2;i>=0;i--)
        {
            rmax[i]= Math.max(rmax[i+1], height[i]);
        }
        for(i=1;i<n-1;i++)
        {
            res=res+Math.min(rmax[i],lmax[i])-height[i];
        }
        return res;
        }
        return 0;
    }
}