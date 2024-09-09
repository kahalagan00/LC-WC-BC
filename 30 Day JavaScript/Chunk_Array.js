/**
 * @param {Array} arr
 * @param {number} size
 * @return {Array}
 */
const chunk = function (arr, size) {
  const res = [];
  let l = 0,
    r = size;

  while (r <= arr.length) {
    res.push(arr.slice(l, r));
    l += size;
    r += size;
  }

  if (l <= arr.length - 1) {
    res.push(arr.slice(l, arr.length));
  }

  return res;
};
