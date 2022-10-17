class Solution {
public:
    bool checkIfPangram(string sen) {
        unordered_set<char> s;
        int l=sen.length();
        for(int i=0;i<l;i++){
            s.insert(sen[i]);
        }
        if(s.size()==26) return true;
        return false;
    }
};