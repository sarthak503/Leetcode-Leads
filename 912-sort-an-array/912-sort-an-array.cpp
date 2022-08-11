class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        priority_queue<int,vector<int>,greater<int>> pq;
        for(auto x:nums)
            pq.push(x);
        vector<int> ans;
        while(!pq.empty()){
            int f=pq.top();pq.pop();
            ans.push_back(f);
        }
        return ans;
    }
};