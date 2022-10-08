class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        if(nums.size() < 3) return 0;
        int closest = nums[0]+nums[1]+nums[2];
        sort(nums.begin(), nums.end());
        for(int l = 0 ; l < nums.size()-2 ; ++l) {
            if(l > 0 && nums[l] == nums[l-1]) continue;
            int m = l+1;
            int r = nums.size()-1;            
            while(m < r) {
                int curSum = nums[l]+nums[m]+nums[r];
                if(curSum == target) return curSum;
                if(abs(target-curSum)<abs(target-closest)) {
                    closest = curSum;
                }
                if(curSum > target) {
                    --r;
                } else {
                    ++m;
                }
            }
        }
        return closest;
    }
};