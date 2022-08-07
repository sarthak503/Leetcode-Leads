class Solution {
public:
    vector<string> reorderLogFiles(vector<string>& logs) {
         vector<pair<string,string>> digitLogs, letterLogs;
        for (auto i : logs) {
            string s="",t="";
            bool flag=false;
            for(auto x:i){
                if(x==' ' && flag==false)
                    flag=true;
                else{
                    if(flag) s+=x;
                    else t+=x;
                }
            }
            if(s[0]>='a' && s[0]<='z')
                letterLogs.push_back({s,t});
            else
                digitLogs.push_back({s,t});
        }
        sort(letterLogs.begin(),letterLogs.end());        
        vector<string> ans;
        for(auto i:letterLogs)
        {
            ans.push_back(i.second+" "+i.first);
        }
        for(auto i:digitLogs)
        {
            ans.push_back(i.second+" "+i.first);
        }
        return ans;
            
       
    }
    
};