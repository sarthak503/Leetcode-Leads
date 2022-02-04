/**
 * @param {string} s
 * @return {boolean}
 */
var isValid = function(s) {
    let arr = [];
        for (let i=0;i<s.length;i++) {
        switch (s[i]) {
            case "(" :
                arr.push("(");
                break;
            case "{" :
                arr.push("{");
                break;
            case "[" :
                arr.push("[");
                break;
            case ")" :
                if(arr.pop() == "(") break;
                else return false;  
            case "}" :
                if(arr.pop() == "{") break;
                else return false;  
            case "]" :
                if(arr.pop() == "[") break;
                else return false;  
        }
    }
     return arr.length===0; 
};