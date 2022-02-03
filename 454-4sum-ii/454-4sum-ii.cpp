class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
         
        int count=0;
        unordered_map<int,int> mp;
        
        for (auto &it1: nums1)
            for (auto &it2:nums2)
                mp[it1+it2]++; 
    
    
        for(int i = 0; i < nums3.size(); i++)
        {
            for(int j = 0; j < nums4.size(); j++)
            {
                int sum = (-1) * (nums3[i] + nums4[j]);
                if(mp[sum])
                {
                    count += mp[sum];
                }
            }
        }
        return count;
    }
};