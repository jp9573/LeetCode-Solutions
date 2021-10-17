class Solution {
    public boolean canJump(int[] nums) {
        int n = nums.length;
        int target = n-1;
        
        for(int i=n-2; i>=0; i--){
            if(nums[i] + i >= target){
                target = i;
            }
        }
        
        if(target == 0) return true;
        return false;
        
    }
}
