class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& a, int k) {
        int n=a.size();
        priority_queue<pair<int,pair<int,int>>> pq;
        for(int i=0;i<n;i++){
            pq.push({a[i][0]*a[i][0]+a[i][1]*a[i][1],{a[i][0],a[i][1]}});
            if(pq.size()>k){
                pq.pop();
            }
        }
        vector<vector<int>> ans;
        while(!pq.empty()){
            int x=pq.top().second.first;
            int y=pq.top().second.second;
            pq.pop();
            ans.push_back({x,y});
        }
        return ans;
    }
};