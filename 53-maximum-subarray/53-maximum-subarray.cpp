class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,maxSum=nums[0],n=nums.size();
        if(n<2)
            return nums[0];
        for(int i=0;i<n;i++){
            sum+=nums[i];
            maxSum=max(sum,maxSum);
            if(sum<0)
                sum=0;
        }
        return maxSum;
    }
};