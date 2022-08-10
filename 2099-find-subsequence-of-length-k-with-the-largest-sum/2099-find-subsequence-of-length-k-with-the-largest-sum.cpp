class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
   
        if(nums.size()==k)
            return nums;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(int i=0;i<nums.size();i++){
            pq.push({nums[i],i});
            if(pq.size()>k)
                pq.pop();
        }
        vector<int> ans(nums.size(),100001);
        while(!pq.empty()){
            int t=pq.top().second;
            ans[t]=nums[t];
            pq.pop();
        }
        vector<int> final;
        for(auto x:ans){
            if(x!=100001){
                final.push_back(x);
            }
        }
        return final;
        
    }
};