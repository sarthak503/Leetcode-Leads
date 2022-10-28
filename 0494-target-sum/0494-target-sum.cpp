class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        target=abs(target);
        int n=nums.size(),sm=0;
        for(int i=0;i<n;i++){
            sm+=nums[i];
        }
        int Som=(sm+target)/2;
        int dp[n+1][Som+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=Som;j++){
                if(i==0)
                    dp[i][j]=0;
                if(j==0)
                    dp[i][j]=1;
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=0;j<=Som;j++){
                if(nums[i-1]<=j){
                    dp[i][j]=dp[i-1][j-nums[i-1]]+dp[i-1][j];
                }
                else
                    dp[i][j]=dp[i-1][j];
            }
        }
        if(sm<target||(sm+target)%2!=0)
            return 0;
        return dp[n][Som];
    }
};