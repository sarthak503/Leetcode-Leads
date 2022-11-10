class Solution {
public:
        bool canConstruct(string x, string y) {
        //Using Array Counter of Size 26;
        int n=x.size(),m=y.size();
        int counter[26]={0};
        for(int i=0;i<m;i++){
            counter[y[i]-'a']++;
        }
        for(int i=0;i<n;i++){
            if(counter[x[i]-'a']-- <=0 )
            return false;
        }
        return true;
        // Using LCS
        // int n=x.size(),m=y.size();
        // string s;
        // sort(x.begin(),x.end());
        // sort(y.begin(),y.end());
        // int dp[n+1][m+1];
        // for(int i=0;i<=n;i++)dp[i][0]=0;
        // for(int i=0;i<=m;i++)dp[0][i]=0;
        // for(int i=1;i<=n;i++){
        //     for(int j=1;j<=m;j++){
        //         if(x[i-1]==y[j-1])dp[i][j]=1+dp[i-1][j-1];
        //         else {
        //             dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
        //         }
        //     }
        // }
        // return (dp[n][m]==n);
    }
    
};