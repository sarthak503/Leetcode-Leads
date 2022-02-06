/**
 * @param {number} n
 * @return {number}
 */
var climbStairs = function(n) {
        let a=0,b=1;
        let c=a+b;
        a=b;
        b=c;
        if(n==1)
            return c;
        n--;
        while(n>0){
            c=a+b;
            a=b;
            b=c;
            n--;
        }
        return c;
};