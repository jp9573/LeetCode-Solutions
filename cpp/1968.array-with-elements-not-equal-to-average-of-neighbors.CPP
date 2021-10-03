class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
       for(int i=1;i<nums.size()-1;i++)
       {
           if((nums[i+1]>nums[i] && nums[i-1]<nums[i]) || (nums[i+1]<nums[i] && nums[i]<nums[i-1]))
           {
               swap(nums[i],nums[i+1]);
           }
       }
        return nums;
    }
};