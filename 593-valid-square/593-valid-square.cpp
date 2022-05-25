class Solution {
public:
    long dis(vector<int> a,vector<int> b){
        return (b[1] - a[1]) * (b[1] - a[1]) + (b[0] - a[0]) * (b[0] - a[0]);
    }
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        unordered_set<long> s({ dis(p1, p2), dis(p1, p3), dis(p1, p4), dis(p2, p3), dis(p2, p4), dis(p3, p4) });
        return !s.count(0) && s.size() == 2; 
    }
};