    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
         int ans=0;
        if(k==0)
            return 0;
        int prod=1;
        int l=0,r=0,reach=0;
        while(r<nums.size())
        {
            while(r<nums.size() and prod*nums[r]<k)
                prod=prod*nums[r++];  
            int kk=(r-reach);
            int rem=reach-l;
            ans+=(kk*(kk+1)/2)+(rem*kk);
            reach=r;
            if(r<nums.size())
                prod=prod*nums[r++];
            while(prod>=k)
               prod=prod/nums[l++];

        }
            
         int kk=(r-reach);
         int rem=reach-l;
         ans+=(kk*(kk+1)/2)+(rem*kk);
       return ans<=0?0:ans;
    }
}