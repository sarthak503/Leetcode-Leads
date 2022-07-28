class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> m;
        int n=s.size();
        int ans=0;
        int slow=0;
        for(int i=0;i<n;i++){
            if(m.count(s[i])!=0){
                slow=max(slow,m[s[i]]+1);
            }
            m[s[i]]=i;
            ans=max(ans,i-slow+1);
        }
            
        return ans;
    }
};