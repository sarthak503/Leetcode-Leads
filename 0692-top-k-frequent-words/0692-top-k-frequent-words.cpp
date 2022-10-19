class Solution {
public:
   #define psi pair<int, string>
    class comp {
    public:
    bool operator() (const psi &p1, const psi &p2) {
      if(p1.first == p2.first) return p1.second < p2.second;
      
      return p1.first > p2.first;
    }
    };
    vector<string> topKFrequent(vector<string>& words, int k) {
        priority_queue<pair<int,string>,vector<pair<int,string>>,comp> pq;
        unordered_map<string,int> m;
        for(int i=0;i<words.size();i++){
            m[words[i]]++;
        }
        for(auto x:m){
            pq.push({x.second,x.first});
            if(pq.size()>k)
                pq.pop();
        }
          vector<string> ans(k);
          int p = k-1;

          while(pq.size() > 0) {
            ans[p--] = pq.top().second;
            pq.pop();
          }

          return ans;
    }
};