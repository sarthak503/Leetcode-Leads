class Solution {
public:
    int maxProfit(vector<int>& v, int ord) {
       long long ans=0;
        sort(v.begin(),v.end());
        int n=v.size();
        int mod=1000000007;
        for(int i=n-1;i>=0;i--){
            long long diff=v[i]-(i==0?0:v[i-1]);
            long long x=min((long long)ord,(n-i)*diff);
            long long r=v[i];
            long long l=r-(x/(n-i));
            ans+=(r*(r+1)/2-l*(l+1)/2)*(n-i);
            ans=ans%mod;
            ans+=l*(x%(n-i));
            ans=ans%mod;
            ord-=x;
        }
        return ans;
    }
};