class Solution {
public:
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
           m[nums[i]]++;
        }
        for(auto x:m){
            pq.push({x.second,x.first});            
            if(pq.size()>k)
                pq.pop();
        }
        vector<int> ans;
        while(!pq.empty()){
            int p=pq.top().second;
            ans.push_back(p);
            pq.pop();
        }
        return ans;
    }
};