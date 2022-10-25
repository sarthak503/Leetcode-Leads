class Solution {
public:
    int bst(vector<int>& nums, int target){
        int l=0,r=nums.size();
	    while(l<r){
		int m=(l+r)/2;
		if(nums[m]<target)  l = m+1;
		else  r=m ;
	    }
	    return l;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        if(n==0) return {-1,-1};
        if(n==1 && nums[0]==target) return {0,0};
        if(n==1 && nums[0]!=target) return {-1,-1};
        int l=bst(nums,target);
        if(l>=n) return {-1,-1};
        if(nums[l]!=target) return {-1,-1};
        int r=bst(nums,target+1);
        return {l,r-1};
        
    }
};