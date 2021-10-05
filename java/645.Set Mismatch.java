//645 Set Mismatch
//Java

class Solution 
{
    public int[] findErrorNums(int[] nums)
    {
        int a[]=new int[2];
        Arrays.sort(nums);
        int flag=0;
        for(int i=0;i<nums.length-1 && flag<2;i++)
        {
            if(nums[i]==nums[i+1])
            {   a[0]=nums[i];
                flag++;
                continue;
            }
            if((nums[i]+1)!=nums[i+1])
            { a[1]=nums[i]+1;
             flag++;
            }
        }
        if(nums[0]==2)
            a[1]=1;
        else if(a[1]==0)
            a[1]=nums[nums.length-1]+1;
        return a;
    }
}