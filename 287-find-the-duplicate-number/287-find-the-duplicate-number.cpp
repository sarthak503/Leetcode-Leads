class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
         unordered_map<int, int> umap;
        for(int i=0;i<nums.size();i++){
            umap[nums[i]]++;
        }
        int x=0;
        for(int i=0;i<nums.size();i++){
            if(umap[nums[i]]>1){
                x=nums[i];
                break;
                }
        }
        return x;
    }
};