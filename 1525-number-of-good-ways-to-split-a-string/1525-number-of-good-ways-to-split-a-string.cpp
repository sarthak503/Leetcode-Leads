class Solution {
public:
    int numSplits(string s) {
        int n=s.length();
        int pre[n];
        int suf[n];
        unordered_set<char> m;
        for(int i=0;i<n;i++){
            m.insert(s[i]);
            pre[i]=m.size();
        }
        m.clear();
        for(int i=n-1;i>=0;i--){
            m.insert(s[i]);
            suf[i]=m.size();
        }
        int cnt=0;
        for(int i=0;i<n-1;i++){
            cout<<pre[i]<<"-"<<suf[i]<<endl;
            if(pre[i]==suf[i+1])
                cnt++;
        }
        return cnt;
        
    }
};