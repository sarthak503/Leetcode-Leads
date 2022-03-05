class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int i,maxx;
        if(nums.size()==1) return nums[0]; //base case
        maxx = *max_element(nums.begin(),nums.end());//maximum of nums array         
        vector<int> v(maxx+1,0); //same element sum array
        for(i=0;i<nums.size();i++) v[nums[i]]+=nums[i];	
        
        //constant space house robber solution base cases
        int prev2=v[0];
        int prev=max(v[0],v[1]);
        int curr;
        for(i=2;i<v.size();i++){
            curr=max(prev,prev2+v[i]);
            prev2=prev;
            prev=curr;
        }
        return curr;
    }
};