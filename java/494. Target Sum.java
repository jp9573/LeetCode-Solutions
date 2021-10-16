class Solution {
    public int findTargetSumWays(int[] nums, int target) {
        Map<String, Integer> dp = new HashMap<>();
        return findTargetSumWays(nums, 0, target, dp);
    }
    
    private int findTargetSumWays(int[] nums, int i, int target, Map<String, Integer> dp) {
        String s = i + ", " + target;
        if(dp.get(s) != null) return dp.get(s);
        if(i == nums.length) {
            if(target == 0) {
                return 1;
            } else {
                return 0;
            }
        }
        
        
        int sum = 0;
        sum += findTargetSumWays(nums, i+1, target + nums[i], dp);
        sum += findTargetSumWays(nums, i+1, target - nums[i], dp);
        
        dp.put(s, sum);      
        return dp.get(s);
    }
}