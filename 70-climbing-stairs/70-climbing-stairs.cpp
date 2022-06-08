class Solution {
public:
    int climbStairs(int n) {
           int a=0,b=1;
        int c=a+b;
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
    }
};