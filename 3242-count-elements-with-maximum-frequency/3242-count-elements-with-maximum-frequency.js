/**
 * @param {number[]} nums
 * @return {number}
 */
var maxFrequencyElements = function(nums) {
    
    const map=new Map();

   for (let i = 0; i < nums.length; i++) {
  if (map.has(nums[i])) {
    map.set(nums[i], map.get(nums[i]) + 1);
  } else {
    map.set(nums[i], 1);
  }
}


    const maxFreq=Math.max(...map.values())

    let maxCount=0;
    for(const [key,value] of map ){
        if(value==maxFreq){
        maxCount++;
        }
    }

    return maxCount * maxFreq;
};