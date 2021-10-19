import java.util.HashMap;
class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap <Integer, Integer> map = new HashMap<Integer, Integer>();
        int complement;
        for (int i = 0; i<nums.length; i++) {
            complement = target - nums[i];  
            if (map.containsKey(complement)) {
                return new int[] {i, map.get(complement)};
            }
            map.put(nums[i], i);
        }
        throw new IllegalArgumentException("No solution");
    }
}