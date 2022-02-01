/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function(s) {
    var sen=s.replace(/\s+/g, ' ').trim()
    var rev=sen.split("").reverse().join("");
    console.log(rev);
    var p=rev.split(" ")[0];
    return p.length;
};