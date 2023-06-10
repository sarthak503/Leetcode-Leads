class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,0);
        int l=0,r=n-1,k=n-1;
        for(int i=0;i<n;i++){
            if(nums[i]<0)
            nums[i]*=-1;
            else
            break;
        }
        int sd=0;
        while(l<=r){
            if(nums[l]>nums[r]){
                sd=nums[l]*nums[l];
                l++;
            }
            else {
                sd=nums[r]*nums[r];
                r--;
            }
            ans[k--]=sd;
        }
        return ans;
    }
};