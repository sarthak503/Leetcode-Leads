class Solution {
public:
    int minMoves(vector<int>& nums) {
        int sum=0,mn=INT_MAX;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            mn=min(mn,nums[i]);
        }
        int ans=sum-(n*mn);
        return ans;
    }
};