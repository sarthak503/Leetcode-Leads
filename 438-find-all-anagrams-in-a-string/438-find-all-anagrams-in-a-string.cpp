class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.size(),m=p.size();
        vector<int> v;
        if(m>n)return v;
        vector<int> a(26,0),b(26,0);
        for(auto x: p){
            a[x-'a']++;
        }
        for(int i=0;i<m;i++){
            b[s[i]-'a']++;
        }
        for(int i=m;i<n;i++){
            if(a==b)v.push_back(i-m);
            b[s[i-m]-'a']--;
            b[s[i]-'a']++;
        }
        if(a==b)v.push_back(n-m);
        return v;
    }
};