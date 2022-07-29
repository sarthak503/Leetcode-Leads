class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int t1=bs(nums,n,target);
        return t1;
       
    }
    
    int bs(vector<int>& nums,int n, int target){
        int i=0,j=n-1;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(nums[mid]<target)
            {
                i=mid+1;
            }
            else{
                j=mid-1;
            }
        }
        return i;
        
    }
};