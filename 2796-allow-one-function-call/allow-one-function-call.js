/**
 * @param {Function} fn
 * @return {Function}
 */
var once = function(fn) {
    let called = 0;

    return function(...args) {
        if (called>=1) {
            return undefined;
        }
        called++;
        return fn.apply(this, args);
    };
};

/**
 * Example usage:
 * let fn = (a, b, c) => (a + b + c);
 * let onceFn = once(fn);
 *
 * console.log(onceFn(1, 2, 3)); // 6
 * console.log(onceFn(2, 3, 6)); // undefined
 */
