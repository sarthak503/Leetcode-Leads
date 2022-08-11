class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        int mx=INT_MIN,count=0;
        vector<int> pC(1001);
        for(auto t:trips){
            pC[t[1]]+=t[0];
            pC[t[2]]-=t[0];
            mx=max(t[2],mx);
        }
        
        for(int i=0;i<mx;i++){
            count+=pC[i];
            if(count>capacity) return false;
        }
        return true;
    }
};