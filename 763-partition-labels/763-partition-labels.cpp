class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> ans;
        map<char, int> umap;
        for(int i=0;i<s.length();i++){
            umap[s[i]]=i;
        }
        // for (auto x : umap)
        // cout << x.first << " " << x.second << endl;    
        int maxx=0,prev=-1;
        for(int i = 0; i < s.length(); i++){
            char ch = s[i];
            maxx=max(maxx,umap[ch]);
            if(maxx == i){
                // partition time
                ans.push_back(maxx - prev);
                prev = maxx;
            }
        }
        
        return ans;
    }
};