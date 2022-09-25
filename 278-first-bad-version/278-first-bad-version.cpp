// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        //T.C : O(n)
        // for(int i=1;i<=n;i++){
        //     if(isBadVersion(i))
        //         return i;
        // }
        // return -1;
        //T.C : O(log(n))
        int l=0,r=n;
        while(r-l>1){
            int mid=l+(r-l)/2;
            if(isBadVersion(mid)==true){
                r=mid;
            }
            else{
                l=mid;
            }
        }
        return r;
    }
};