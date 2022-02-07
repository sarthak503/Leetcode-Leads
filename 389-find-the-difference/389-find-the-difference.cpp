class Solution {
public:
    char findTheDifference(string s, string t) {
        int sSum=0,tSum=0;
        char ch;
        for(int i=0;i<s.length();i++){
            sSum+=s[i];
        }
        for(int i=0;i<t.length();i++){
            tSum+=t[i];
        }
        ch=tSum-sSum;
        return ch;
    }
};