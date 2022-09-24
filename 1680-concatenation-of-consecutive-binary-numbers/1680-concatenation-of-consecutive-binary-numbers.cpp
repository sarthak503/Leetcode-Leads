class Solution {
public:
    int concatenatedBinary(int n) {
        
        long ans = 0, MOD = 1e9 + 7;
        for(int i=1;i<=n;i++){
            int p=i;
            int k=0;
            while(p>0){
                p/=2;
                k++;
            }
            ans=((ans<<k)+i)%MOD;
        }
        return ans;
    }
};