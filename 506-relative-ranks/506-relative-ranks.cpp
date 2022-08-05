class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<int> maxh;
        for(int i=0;i<score.size();i++){
            maxh.push(score[i]);
        }
        vector<string> ans;
       
        int count =1;
        unordered_map<int,string> mp;
        while(maxh.size()>0){
            int t=maxh.top();
            maxh.pop();
            if(count==1)
                mp[t]="Gold Medal";
            else if(count==2){
                mp[t]="Silver Medal";
            }
            else if(count==3){
                mp[t]="Bronze Medal";
            }
            else{
                mp[t]=to_string(count);
            }
            count++;
        }
        for(auto x:score){
            ans.push_back(mp[x]);
        }
        return ans;
    }
};