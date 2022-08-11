class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> pq;
        int s=0,s1=0;
        for(auto x:piles){
            pq.push(x);
        }
 
        while(!pq.empty() && k--){
            int f=pq.top();
            pq.pop();
            //cout<<f<<" ";
            f-=floor(f/2);
            //cout<<f<<endl;
            pq.push(f);
        }
        while(!pq.empty()){
            int f=pq.top();
            pq.pop();
            s1+=f;
        }
        return (s1);
    }
};