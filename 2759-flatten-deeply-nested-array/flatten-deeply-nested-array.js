/**
 * @param {Array} arr - The input array to be flattened.
 * @param {number} depth - The depth to which the array should be flattened.
 * @return {Array} - The flattened array.
 */
var flat = function (arr, depth, result = [], currentCycle = 0) {

    for (let index = 0; index < arr.length; index++) {
        if (Array.isArray(arr[index]) && currentCycle < depth) {
            flat(arr[index], depth, result, currentCycle + 1);
        } else {
            result.push(arr[index]);
        }
    }
    return result;
};
