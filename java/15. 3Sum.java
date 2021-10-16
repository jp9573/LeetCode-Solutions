class Solution {
  public List<List<Integer>> threeSum(int[] nums) {
      List<List<Integer>> result = new ArrayList<>();

      Arrays.sort(nums);

      for(int i = 0; i < nums.length - 1; i++) {
          int currentElement = nums[i];

          int l = i + 1;
          int r = nums.length - 1;

          if(i > 0 && nums[i] == nums[i-1]) {
              continue;
          }

          int sum;
          while (l < r) {
              sum = currentElement + nums[l] + nums[r];
              if(sum < 0) l++;
              else if(sum > 0) r--;
              else {
                  result.add(Arrays.asList(currentElement, nums[l++], nums[r]));

                  while (nums[l] == nums[l - 1] && l < r) l += 1;
              }
          }
      }

      return result;
  }
}