class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt=0,mx=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                cnt++;
            }
            else{
                mx=max(mx,cnt);
                cnt=0;
            }
        }
        mx=max(mx,cnt);
        return mx;
    }
};