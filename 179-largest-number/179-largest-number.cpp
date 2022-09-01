class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> str;
        for(auto x:nums)
            str.push_back(to_string(x));
        sort(begin(str),end(str),[](string &s1,string &s2){return s1+s2>s2+s1;});
        string ans;
        for(auto x:str)
             ans+=x;
         while(ans[0]=='0' && ans.length()>1)
             ans.erase(0,1);
        return ans;
        
    }
};