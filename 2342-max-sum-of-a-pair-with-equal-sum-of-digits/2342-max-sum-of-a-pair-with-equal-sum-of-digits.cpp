class Solution {
public:
    int maximumSum(vector<int>& nums) {
        priority_queue<pair<int,int>> pq;
        unordered_map<int,int> m;
        for(auto x:nums){
            int s=0;
            int t=x;
            while(x>0)
            {
                int d=x%10;
                s+=d;
                x/=10;
                
            }
            pq.push({s,t});
        }
        if(pq.size()<2)
            return -1;
        int mx=INT_MIN;
        while(pq.size()>=2){
            int n1s=pq.top().first;
            int n1=pq.top().second;
            pq.pop(); 
            int n2s=pq.top().first;
            int n2=pq.top().second;
            //cout<<n1<<"-"<<n1s<<"||"<<n2<<"-"<<n2s<<endl;
            pq.pop();
            if(n1s==n2s){
                mx=max(n2+n1,mx);
            }
            else{
                pq.push({n2s,n2});
            }
        }
        if(mx==INT_MIN)
            return -1;
        return mx;
    }
};