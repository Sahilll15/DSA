/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(nums, fn, init) {
    let value=init;

    nums.forEach((num)=>{
        value =fn(value,num);
    })

    return value;
};