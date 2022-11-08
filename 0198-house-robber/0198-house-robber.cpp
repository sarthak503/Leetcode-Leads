class Solution {
public:
    // int cnt=0;
    // int helper(vector<int>& nums,int n){
    //     if(n<0)
    //         return 0;
    //     if(n==0)
    //         return nums[0];
    //     if(n==1)
    //         return max(nums[0],nums[1]);
    //     return max(helper(nums,n-1),helper(nums,n-2)+nums[n]);
    // }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n<0 || n==0)
            return 0;
        if(n==1) return nums[0];
        int dp[n];
        dp[0]=nums[0];
        dp[1]=max(nums[0],nums[1]);
        for(int i=2;i<n;i++){
            dp[i]=max(dp[i-1],dp[i-2]+nums[i]);
        }
        return dp[n-1];
    }
};

// 1231
// 123|1--123
// 12-----12|3
// 1|2----1
// 3-----4

    
