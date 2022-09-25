class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        int p=k%n;
        reverse(nums.begin()+n-p,nums.end());
        reverse(nums.begin(),nums.end()-p);
        reverse(nums.begin(),nums.end());
    }
};