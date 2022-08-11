class Solution {
public:
    int maximumScore(int a, int b, int c) {
        vector<int> amount;
        amount.push_back(a);
        amount.push_back(b);
        amount.push_back(c);
            
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
        return cnt;
    }
};