class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        priority_queue<int,vector<int>, greater<int>> pq;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0)
                pq.push(nums[i]);
        }
        int cnt=0;
        while(!pq.empty()){
            int f=pq.top();
            cout<<f<<endl;
            pq.pop();
            vector<int> temp;
            while(!pq.empty()){
                int t=pq.top();
                pq.pop();
                t=t-f;
                cout<<t<<" ";
                temp.push_back(t);
            }
            cout<<endl;
            for(auto x:temp){
                if(x>0)
                pq.push(x);
            }
            temp.clear();
            cnt++;
        }
        return cnt;
    }
};