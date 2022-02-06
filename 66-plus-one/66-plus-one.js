/**
 * @param {number[]} digits
 * @return {number[]}
 */
var plusOne = function(digits) {
        digits.reverse()
        let i, carry=0;
        for(i=0;i<digits.length;i++){
            if((digits[i]+1)>9){
                carry=1;
                digits[i]=0;
            }
            else{
                digits[i]++;
                carry=0;
                break;
            }
        }
        if(carry){
            digits[i]=(carry);
        }
        digits.reverse()
        return digits;
};