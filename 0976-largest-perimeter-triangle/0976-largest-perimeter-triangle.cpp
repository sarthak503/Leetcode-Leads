class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        //All you have to do is use the Triangle Inequality Theorem, 
        //which states that the sum of two side lengths of a triangle
        //is always greater than the third side.
        int mx=INT_MIN;
        sort(nums.begin(),nums.end());
        for(int i=nums.size()-3;i>=0;i--)
        if(nums[i]+nums[i+1]>nums[i+2]){
            return nums[i]+nums[i+1]+nums[i+2];
        }
        return 0;
    }
};