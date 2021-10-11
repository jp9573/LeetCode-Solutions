var twoSum = function(nums, target) {
  var map = new Map();

  for(var i = 0; i<nums.length; i++) {
      var num = nums[i];
      if(map.get(num) === undefined) map.set(target-num, i);
      else return [map.get(num), i];
  }
};
