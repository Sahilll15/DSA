/**
 * @param {number} init
 * @return {{ increment: Function, decrement: Function, reset: Function }}
 */
var createCounter = function(init) {
    var currentCount = init;
    
    function increment() {
        currentCount += 1;
        return currentCount;
    }

    function reset() {
        currentCount = init;
        return currentCount;
    }

    function decrement() {
        currentCount -= 1;
        return currentCount;
    }

    return {
        increment,
        decrement,
        reset
    };
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */
