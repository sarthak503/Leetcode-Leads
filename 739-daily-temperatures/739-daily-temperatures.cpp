class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>> s;
        
        int n=temperatures.size();
        vector <int> ans (n,0);
        for(int i=n-1;i>=0;i--){
            int pres=temperatures[i];
            while(!s.empty() && s.top().first<=pres) s.pop();
            
            ans[i]=s.empty()?0:s.top().second-i;
            s.push({pres,i});
        }
       
        return ans;
    }
};