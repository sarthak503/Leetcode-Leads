class Solution {
public:
    int findMin(vector<int>& nums) {
    int ans,n=nums.size();
    int l=0,r=n-1;
    if(n==1) return nums[0];
    if(nums[l]<nums[r]) return nums[l];
    while(l<=r){
        int mid=l+(r-l)/2;
     
        if(nums[mid]>nums[mid+1])
            return nums[mid+1];
     
        if(nums[mid-1]>nums[mid])
            return nums[mid];
        
        
        if(nums[mid]>nums[l]){
            
            l=mid+1;
        }
        else
            
            r=mid-1;
        }
       
    
    return INT_MAX;
    }
};