/**
 * @param {Array} arr1
 * @param {Array} arr2
 * @return {Array}
 */
var join = function(arr1, arr2) {
    var joinedHashMap = {}

       for(var objFromArray of arr1.concat(arr2)) {
        var id = objFromArray.id;
              joinedHashMap[id] ?
           joinedHashMap[id] = {...joinedHashMap[id], ...objFromArray} :
             joinedHashMap[id] = objFromArray
    }
      return Object.values(joinedHashMap)
    };