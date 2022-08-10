class Solution {
public:
    int fillCups(vector<int>& amount) {
        priority_queue<int> pq;
        for(auto x:amount){
            if(x>0)
            pq.push(x);
        }
        if(pq.size()==0)
            return 0;
        if(pq.size()==1)
            return pq.top();
        int cnt=0;
        while(!pq.empty() &&pq.size() >= 2){
            int n1=pq.top();
            pq.pop();
            n1--;
            int n2=pq.top();
            pq.pop();
            n2--;
            if(n1>0)
            pq.push(n1);
            if(n2>0)
            pq.push(n2);
            cnt++;
                
        }
        cnt += pq.empty() ? 0 : pq.top();
        return cnt;
        
    }
};