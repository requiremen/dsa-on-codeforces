/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var moveZeroes = function(nums) {
    let x = 0;
    let n = nums.length;
    for(let i = 0;i<n;i++){
        if(nums[i] !== 0){
            nums[x] = nums[i];
            x++;
        }
    }
    for(let i = x;i<n;i++){
        nums[i] = 0;
    }
    return nums;
};
