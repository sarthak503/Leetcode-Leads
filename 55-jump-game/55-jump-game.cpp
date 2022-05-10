class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxx=0;
        int n=nums.size();
        if(n<2) return true;
        for(int i=0;i<n-1 && maxx>=i;i++){
            if(maxx<i+nums[i])
            {
                maxx=i+nums[i];
            }
            if(maxx>=n-1){
                return true;
            }
        }
        return false;
    }
};