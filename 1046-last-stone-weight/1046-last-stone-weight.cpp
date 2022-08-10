class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(int i=0;i<stones.size();i++){
            pq.push(stones[i]);
        }
        int cnt=0;
        while(pq.size()>1){
            int first=pq.top();
            pq.pop(); 
            int second=pq.top();
            pq.pop();
            if(first!=second){
                pq.push(first-second);
            }
           
        }
        if(pq.size()==1)
            return pq.top();
        return 0;
    }
};