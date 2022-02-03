/**
 * @param {string} a
 * @param {string} b
 * @return {string}
 */
var addBinary = function(a, b) {
        a=a.split("").reverse().join("");
        b=b.split("").reverse().join("");
     let i = 0;
  let carry = 0;
  let bit = "";
  while (true) {
    sum = (parseInt(a[i]) || 0) + (parseInt(b[i]) || 0) + carry;
    remainder = sum % 2;
    carry = Math.floor(sum / 2);
    bit = remainder + bit;
    i++;
    if (a[i] === undefined && b[i] === undefined)
      return (carry !== 0 ? carry : "") + bit;
  }
        
};