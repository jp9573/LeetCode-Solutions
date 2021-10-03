class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) 
         {
        int n=nums.size();
        int k=0;
        int x;
        int min=nums[0]+nums[1]+nums[2];
        sort(nums.begin(),nums.end());
        while(k<n-2){
            int sum;
            int i=k+1;
            int j=n-1;
            while(i<j)
            { 
             sum=nums[k]+nums[i]+nums[j];
             if(sum==target)
               {return sum;}
                else
                    if(sum>target)
                        j--;
                else
                    i++;
                 if(fabs(sum-target)<fabs(min-target))
                       min=sum;
            }
               k++;
             }
     return min;
    }
};