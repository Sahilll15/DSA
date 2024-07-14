/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    let ans=[];

    arr.forEach((item,index)=>{
       if(fn(item,index)){
            ans.push(item)
       }
    })
    return ans;
};