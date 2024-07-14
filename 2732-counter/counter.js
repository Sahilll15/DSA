/**
 * @param {number} n
 * @return {Function} counter
 */

var ans;
var createCounter = function(n) {
    ans=n-1;
    return function() {
      ans=ans+1;
       return ans;
    };
      
};

/** 
 * const counter = createCounter(10)
 * counter() // 10
 * counter() // 11
 * counter() // 12
 */