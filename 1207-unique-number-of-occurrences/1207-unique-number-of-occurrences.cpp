class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> m;
        int n=arr.size();
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        
        unordered_set<int> s;
        
        for(auto x:m){
            int sec=x.second;
            s.insert(sec);
        }
        
        if(s.size()==m.size())
            return true;
        return false;
    }
};