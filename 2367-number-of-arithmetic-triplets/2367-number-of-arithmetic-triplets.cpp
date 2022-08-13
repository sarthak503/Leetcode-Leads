class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int cnt = 0;
        unordered_set<int> set;
        for(int i=0;i<nums.size();i++){
            set.insert(nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            if(set.find(nums[i]+diff)!=set.end() && set.find(nums[i]+diff+diff)!=set.end()){
                cnt++;
            }
        }
        return cnt;
    }
};