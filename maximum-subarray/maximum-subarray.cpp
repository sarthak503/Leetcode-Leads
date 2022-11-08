class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maxS=nums[0];
        int n=nums.size();
        if(n<2)
            return nums[0];
        for(int i=0;i<n;i++){
            sum+=nums[i];
            maxS=max(maxS,sum);
            if(sum<0)
                sum=0;
        }
        return maxS;
    }
};