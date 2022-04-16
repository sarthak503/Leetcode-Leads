class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)
            return false;
        if(n==1)
            return true;
        bool flag=true;
        while(n>1)
        {
            if(n%2==0)
                n/=2;
            else{
                flag=false;
                break;
            }
        }
        return flag;
    }
};