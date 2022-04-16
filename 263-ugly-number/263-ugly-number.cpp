class Solution {
public:
    bool isUgly(int n) {
        bool flag=true;
        while(n>0){
            if(n%2==0)
                n/=2;
            else
                break;
        }
        while(n>0){
            if(n%3==0)
                n/=3;
            else
                break;
        }
        while(n>0){
            if(n%5==0)
                n/=5;
            else
                break;
        }
        if(n!=1)
        return false;
        return true;
    }
};