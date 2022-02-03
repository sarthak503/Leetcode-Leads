class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        unordered_map<int, int> umap;
        for(int i=0;i<nums.size();i++){
            umap[nums[i]]++;
        }
        int ele=0;
        for(int i=0;i<=nums.size();i++){
             if (umap.find(i) == umap.end()){
                 ele=i;
             }
        }
        return ele;
    }
};