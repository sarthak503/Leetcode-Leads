/**
 * @param {number[]} nums
 * @return {number}
 */
var singleNumber = function(nums) {
      var fac=0;
        for(var i=0;i<nums.length;i++){
            fac=fac^nums[i];
        }
        return fac;
    
};