class Solution {
public:
    bool isSubsequence(string s, string t) {
        int cnt=0;int idx=-1;
        for(int i=0;i<s.length();i++){
             for(int j=0;j<t.length();j++){
                if(s[i]==t[j] && j>idx)
                {
                    cnt++;
                    idx=j;
                    break;
                }
            }
        }
        if(cnt==(s.length()))
           return true;
         return false;
    }
};