class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int> m;
        priority_queue<int> pq;
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
        }
        int mid = arr.size()/2;
        int cnt=0;
        for(auto x:m){
            pq.push(x.second);
        }
        int ans=0;
        while(!pq.empty()){
            int t=pq.top();
            ans+=t;
            cnt++;
            if(ans>=mid) return cnt;            
            pq.pop();            
        }
        return arr.size();
    }
};