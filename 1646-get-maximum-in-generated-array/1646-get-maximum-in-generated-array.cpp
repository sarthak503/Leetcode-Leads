class Solution {
public:
    int getMaximumGenerated(int n) {
        // nums[2*i]=nums[i]
        // nums[even=i]=nums[i/2]
        // nums[2*i+1]=nums[i]+nums[i+1]
        // nums[odd=i]=nums[i/2]+nums[(i/2)+1]
        if(n<2) return n;
        vector<int> nums;
        nums.push_back(0);
        nums.push_back(1);
        
        int mx=INT_MIN;
        for(int i=2;i<=n;i++){
            if(i%2==0)
                nums.push_back(nums[i/2]);
            else
                nums.push_back(nums[i/2]+nums[(i/2)+1]);
            mx=max(mx,nums[i]);
        }
        
            
        
        return mx;
            
    }
};