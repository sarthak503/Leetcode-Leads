class Solution {
public:
    int firstUniqChar(string s) {
          unordered_map<char, int> umap;
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            umap[ch]++;;            
        }
        for (auto x : umap)
        cout << x.first << " " << x.second << endl;
        for(int i=0;i<s.length();i++){
            if(umap.at(s[i])==1)
                return i;
        }
        return -1;
    }
};